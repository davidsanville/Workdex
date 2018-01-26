//
//  main.cpp
//  Workdex
//
//  Created by David Sanville on 1/17/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#include <iostream>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

const int dummy = 8;

struct UI {
    string items[dummy];
    string stories[dummy]; //replace with some multi-node structure, for epics
    stack<string> orderedTasks;
    
    void initializeDummy() {
        for (int i =0; i<dummy; i++) items[i] = "item";
    }
    
    void display() {
        for (int i=0; i<dummy; i++)  cout << items[i];
    }
    
    void fillItems() {
        cout << "User fill here";
        //use panda for CSV upload integration?
    }
    
};


//at the end of each task 1 of 4 things can happen
enum result {complete, stuck, delayed, nested};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    UI foo;
    foo.initializeDummy();
    foo.display();
    //foo.fillItems();
    
    return 0;
}
