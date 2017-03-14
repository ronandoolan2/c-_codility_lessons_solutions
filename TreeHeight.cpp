

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int heightHelper(tree *root) {
    if (!root) return 0;
    else return 1 + max(heightHelper(root->l), heightHelper(root->r));
}

/*int height() {
    return heightHelper(this->root);
}*/


int solution(tree * T) {
    // write your code in C++14 (g++ 6.2.0)
   int height = heightHelper(T);
   return height - 1;
     
}


