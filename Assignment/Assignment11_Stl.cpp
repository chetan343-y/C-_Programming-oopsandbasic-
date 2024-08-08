#include <iostream>
#include <cstring>
#include <list>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    std::list<Node*> nodes;

public:
    void push_front(int value) {
        Node* newNode = new Node(value);
        nodes.push_front(newNode);
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        nodes.push_back(newNode);
    }

    void insert(int value, int position) {
        Node* newNode = new Node(value);
        auto it = nodes.begin();
        std::advance(it, position);
        nodes.insert(it, newNode);
    }

    void remove(int position) {
        auto it = nodes.begin();
        std::advance(it, position);
        Node* nodeToRemove = *it;
        nodes.erase(it);
        delete nodeToRemove;
    }

    void printList() {
        for (auto node : nodes) {
            std::cout << node->data << " ";
        }
        std::cout << std::endl;
    }
};


char* findSubstring(char* str, char* substr) {
    char* p = str;
    char* q = substr;
    int substrLen = strlen(substr);

    while (*p != '\0') {
        if (strncmp(p, q, substrLen) == 0) {
            return p;
        }
        p++;
    }

    return nullptr; // not found
}

int main() {
    // char str[] = "hello world hello again";
    // char substr[] = "ello";

    // char* p = findSubstring(str, substr);

    // while (p != nullptr) {
    //     std::cout << "Found substring at position: " << p - str << std::endl;
    //     p = findSubstring(p + 1, substr);
    // }

  LinkedList list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    list.printList(); // Output: 3 2 1

    list.push_back(4);
    list.push_back(5);

    list.printList(); // Output: 3 2 1 4 5

    list.insert(6, 2);

    list.printList(); // Output: 3 2 6 1 4 5

    list.remove(2);

    list.printList(); // Output: 3 2 1 4 5
    return 0;
}