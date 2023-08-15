#include "Map.h"

Location* Map::recInsert(Location* curr, Location* toInsert){

}

void Map::insertLocation(Location* location){
    
    //make sure node is not in the tree
    if (findLocation(location->getName()) != nullptr){
        cout << "Location already in tree. Insertion terminated." << endl;
    }
    else { //location is not a duplicate and can be inserted into tree

    }
}

//desc: returns nullptr if target not in the tree. else returns a pointer to that location
Location* Map::findLocation(string targetName){

    if (isEmpty){
        return nullptr;
    }
    else {
        return recFindIns(targetName, m_root, FINDMODE); //RETURNS EITHER NULLPTR (if not in tree) or a pointer pointing to the node with the name in find mode
    }
}

Location* Map::recFindIns(string targetName, Location* curr, int mode){
    
    if (mode == FINDMODE){
            //BASE CASE
        if (curr->getName() == targetName){ //if a node w/ same name is in the tree
            return curr;
        }

        //RECURSIVE CASES
        else if (curr->getName() < targetName){ //if target node is higher in ascii value
            if (curr->getRight() == nullptr) //if there is no right child return nullptr
                return nullptr;
            else { //return the recursive result of the right subtree
                return recFindIns(targetName, curr->getRight(), FINDMODE);
            }
        }
        else { //target node is lower in ascii value
            if (curr->getLeft() == nullptr)
                return nullptr;
            else { //return the recursive result of the left subtree
                return recFindIns(targetName, curr->getLeft(), FINDMODE);
            }
        }
    }
    if (mode == INSERTMODE){
            //BASE CASE
        if (curr->getName() == targetName){ //if a node w/ same name is in the tree
            return nullptr;
        }

        //RECURSIVE CASES
        else if (curr->getName() < targetName){ //if target node is higher in ascii value
            if (curr->getRight() == nullptr) //if there is no right child return this node
                return curr;
            else { //return the recursive result of the right subtree
                return recFindIns(targetName, curr->getRight(), INSERTMODE);
            }
        }
        else { //target node is lower in ascii value
            if (curr->getLeft() == nullptr)
                return curr;
            else { //return the recursive result of the left subtree
                return recFindIns(targetName, curr->getLeft(), INSERTMODE);
            }
        }
    }
}

bool Map::isEmpty(){
    if (m_root == nullptr){
        return true;
    }
    return false;
}