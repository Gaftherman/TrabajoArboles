#pragma once
//using namespace std;
#include <iostream>
#include <vector>
#include <string>

struct Node 
{
    int data;
    std::vector<Node*> children;

    Node(int value) : data(value) {}
};

class NaryTree 
{
private:
    Node* root;

public:
    NaryTree(int value) {
        root = new Node(value);
    }

    void insert(int parentValue, int value) {
        Node* newNode = new Node(value);
        insertNode(root, parentValue, newNode);
    }
    void insertNode(Node* node, int parentValue, Node* newNode) {
        if (node == nullptr) {
            return;
        }

        if (node->data == parentValue) {
            node->children.push_back(newNode);
            return;

        }

        for (auto child : node->children) {
            insertNode(child, parentValue, newNode);
        }

    }
    std::string printExtension(Node* node, bool primero = true) {
        if (node == nullptr) {
            return "";
        }

        std::string result = "";
        if (primero) 
        {
            result += "{";
        }
        else {
            result += "; ";
        }

        result += std::to_string(node->data);

        for (auto child : node->children) {
            result += " ";
            result += printExtension(child, false);
        }

        if (primero) {
            result += "}";
        }

        return result;
    }
    std::string preOrderTraversal(Node* node) {
        if (node == nullptr) {
            return "";
        }

        std::string result = std::to_string(node->data) + " ";

        for (auto child : node->children) {
            result += preOrderTraversal(child);
        }

        return result;
    }

    // Recorrido en inorden
    std::string inOrderTraversal(Node* node) {
        if (node == nullptr) {
            return "";
        }

        std::string result = "";

        if (!node->children.empty()) {
            result += inOrderTraversal(node->children[0]);
        }

        result += std::to_string(node->data) + " ";

        for (size_t i = 1; i < node->children.size(); ++i) {
            result += inOrderTraversal(node->children[i]);
        }

        return result;
    }

    // Recorrido en postorden
    std::string postOrderTraversal(Node* node) {
        if (node == nullptr) {
            return "";
        }

        std::string result = "";

        for (auto child : node->children) {
            result += postOrderTraversal(child);
        }

        result += std::to_string(node->data) + " ";

        return result;
    }

    void printDigraph(Node* node, int level = 0) 
    {
        if (node == nullptr) {
            return;
        }

        std::cout << std::string(level * 4, ' ') << node->data << std::endl;

        if (!node->children.empty()) 
        {
            std::cout << std::string(level * 4, ' ') << " / \\" << std::endl;
            if (node->children.size() == 1) 
            {
                std::cout << std::string(level * 4, ' ') << " |" << std::endl;
            }
        }

        for (auto child : node->children) {
            printDigraph(child, level + 1);
        }
    }

    Node* getBTree(Node* node) {
        if (node == nullptr) {
            return nullptr;
        }

        Node* bTree = new Node(node->data);

        for (auto child : node->children) {
            Node* bChild = getBTree(child);
            bTree->children.push_back(bChild);
        }

        return bTree;
    }

    void printBTree(Node* node) {
        if (node == nullptr) {
            return;
        }

        std::cout << node->data << " -> ";
        for (auto child : node->children) {
            std::cout << child->data << " ";
        }
        std::cout << std::endl;

        for (auto child : node->children) {
            printBTree(child);
        }
    }
    Node* getRoot() {
        return root;
    }
};