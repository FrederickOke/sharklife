#include "Map.h"


//desc: returns nullptr if target not in the tree. else returns a pointer to that location
Location* Map::findLocation(string targetName){

    if (isEmpty){
        return nullptr;
    }
    else {
        return recFind(targetName, m_root); //RETURNS EITHER NULLPTR (if not in tree) or a pointer pointing to the node with the name
    }
}

Location* Map::recFind(string targetName, Location* curr){
    //BASE CASE
    if (curr->getName() == targetName){ //if a node w/ same name is in the tree
        return curr;
    }

    //RECURSIVE CASES
    else if (curr->getName() < targetName){ //if target node is higher in ascii value
        if (curr->getRight() == nullptr) //if there is no right child return nullptr
            return nullptr;
        else { //return the recursive result of the right subtree
            return recFind(targetName, curr->getRight());
        }
    }
    else { //target node is lower in ascii value
        if (curr->getLeft() == nullptr)
            return nullptr;
        else { //return the recursive result of the left subtree
            return recFind(targetName, curr->getLeft());
        }
    }
}


bool Map::isEmpty(){
    if (m_root == nullptr){
        return true;
    }
    return false;
}