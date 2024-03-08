#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include "header.h"
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;
// int main (){
//     std::cout << "hello everyone\n";
//     return 0;
// }

// int main (){
//     puts("hello everyone...\n");
//     return 0;
// }

// int main (){
//     string hobbie;
//     cout << "tell me about your hobby" << endl;
//     cin >> hobbie;
//     // getline(cin, hobbie);
//     cout << "Interesting! " << hobbie << " is my hobbie too...\n";
//     return 0;
// }

// lets assume you have an array named 'givenArray' which contains the value [1, 2, 3, 4]. Now you need to
// change the index value of 3 of this given array from '4' to '10'.

// int main(){

//     int givenArray[4] = {1,2,3,4};
//     int *myp = givenArray;
//     myp+=3;
//     *myp = 10;
//     cout << "New array is " << givenArray[3] << endl;
//     // printf("new array is %d \n", )
//     return 0;
// }

// int main(){
//     int rating;
//     puts("tell us how would you rate us between 1-5");
//     cin >> rating;
//     // printf("So, you rated us %d\n",rating, rating == 5 ? "we are overwhelmed" : rating == 4 ? "thank you, we are happy to hear that you rated us %d" : rating < 4 && rating > 0 ? "thank you for your rating, we will try our best to improve our quality" : "Unfortunately, we haven't got any rating from your side");
//     cout << "So, you rated us " << rating;
//     printf(rating == 5 ? "we are overwhelmed" : rating == 4 ? cout << "thank you, we are happy to hear that you rated us " << rating : rating < 4 && rating > 0 ? "thank you for your rating, we will try our best to improve our quality" : "Unfortunately, we haven't got any rating from your side");
//     return 0;
// }

// int main(){

//     char number = '4';

//     try
//     {
//         puts("You're doing good\n");
//         cout << "now let's check if you put the right data-type\n" << endl;
//         throw number;
//     }
//     catch(float x)
//     {
//         puts("it's a float.\n");
//     }catch(int x){
//         cout << "it's an integer-type\n" << endl;
//     }catch(...){
//         cout << "Sorry, out of our scope.\n" << endl;
//     }

//     return 0;
// }

// int main(){

//     char my_array[] = {'a', 'b', 'c', 'd'};
//     int j = 1;

//     for (char i : my_array)
//     {

//        cout << "No." << j << " character is :" << i << endl;
//        j++;
//     }

//     return 0;
// }

// struct course
// {
//     const char *topic_names[50];
//     const char *professor_name;
//     const char *professor_emailid;
//     int number_of_hours;
// };

// int main(){

//     course Algorithms = {{"Binarysearch", "programming"}, "Rahul", "Rahul@gamil.com", 40};
//     course Artificial_Intelligence = {{"MachineLearning", "B"}, "Raj", "Raj@gamil.com", 70};

//     // for(const char* i : Algorithms.topic_names){
//     //     cout << i << endl;
//     // }
//     // cout << Algorithms.topic_names << endl;

//     course * AI = &Artificial_Intelligence;

//     AI->number_of_hours = 80;
//     // Artificial_Intelligence.topic_names[2] = "CNN";
//     AI->professor_name = "ray";

//     for(int i = 0; AI->topic_names[i] == " "; i++){
//         Artificial_Intelligence.topic_names[i] = "CNN" ;
//     }

//     for(int i = 0; AI->topic_names[i] != 0; i++){
//         cout << AI->topic_names[i] << endl;
//     }

//     cout << AI->professor_name << endl;
//     return 0;
// }

// int main(){

//     int u1 = 1;
//     int u2 = 9;
//     float v1 = 2.4;
//     float v2 = 4.2;

//     add_me(v1, v2);

//     cout << "sum of two numbers is " << add_me(v1, v2) << endl;

//     return 0;
// }

// ########## example of call by Value and call by Reference ##################

// int sum(int a, int *b)   // example of call by reference
// {

//     *b+=2;
//     return a + (*b);
// }

// int main(){

//     int a = 2;
//     int b = 2;

//     int (*pointstosum)(int a, int *b) = sum;

//     // int result = sum(a,&b); // example of call by reference
//     int result = (*pointstosum)(a,&b);

//     cout << "So, the value of b is " << b << endl;
//     cout << "So, the value of a is " << a << endl;
//     cout << "So, the sum of two numbers is " << result << endl;
//     return 0;
// }

// ########## Example of Class(Differentiation between Private & Public Data && Objects...) ##################

// class AppUser{
//     string _password = "default";
//     string _emailid = "default";
//     int _app_unique_id = 1234;

// public:
//     string name;
//     void uniqueIDconfirmationMessage(int provided_unique_id);
//     void setInformations(string & new_password, string & new_emailid){_password = new_password; _emailid = new_emailid;}
//     void getInformations(){cout << "\nYour emailId is " << _emailid << endl;}
// };

// void AppUser::uniqueIDconfirmationMessage(int provided_unique_id)
// {

//     if (_app_unique_id == provided_unique_id)
//     {
//         cout << "Hello " << name << ", you've provided the right unique id. Now, you are ready to go...." << endl;
//     }
//     else{
//         cout << "Sorry, provided the wrong id...Can you please try again?" << endl;
//     }

// }

// int main(){

//     int provided_unique_id;
//     string username;
//     string new_password;
//     string new_emailid;

//     AppUser Rittik

//     cout << "Can you please set a username for this app?" << endl;
//     cin >> username;

//     Rittik.name = username;

//     cout << "Now provide the unique id you have already been provided." << endl;
//     cin >> provided_unique_id;

//     Rittik.uniqueIDconfirmationMessage(provided_unique_id);

//     cout << "Set your password" << endl;
//     cin >> new_password;

//     cout << "Set your emailid" << endl;
//     cin >> new_emailid;

//     Rittik.setInformations(new_password, new_emailid);

//     Rittik.getInformations();
//     return 0;
// }

// ########## Example of Constructors and Destructor ##################

// class Laptop
// {
// private:
//     string _software_configuration;
//     string _processor;
//     int _Ram;
//     string _object_name;

// public:
//     Laptop(const string &object_name) : _object_name(object_name) {}
//     Laptop();                                                                              // Default Constructor
//     Laptop(const string &software_configuration, const string &processor, const int &Ram); // Parameter Constructor
//     // Laptop(const Laptop &);                                                                // Copy Constructor
//     string getInformations()const;
//     ~Laptop(); // Destructor
// };
// Laptop::Laptop()
// {
//     puts("You're accessing a default operator");
// }

// Laptop::Laptop(const string &software_configuration, const string &processor, const int &Ram) : _software_configuration(software_configuration), _processor(processor), _Ram(Ram)
// {
//     puts("You are running a parameter constructor");
// }

// // Laptop::Laptop(const Laptop &values)
// // {
// //     puts("We are using a copy-constructor");
// //     _software_configuration = values._software_configuration + "9";
// //     _processor = values._processor + "core";
// // }

// Laptop::~Laptop()
// {
//     // puts("Destructor operator is called.");
// }

// string Laptop::getInformations() const
// {
//     cout << "You're software-configuration is " << _software_configuration << "." << endl;
//     cout << "You're using " << _processor << " processor." << endl;
//     return 0;
// }

// int main()
// {

//     string object_name;
//     string software_configuration;
//     string processor;
//     string make_a_quary;
//     string check_a_quary;
//     int Ram;

//     vector<string> objects;
//     vector<Laptop> objects_data;

//     cout << "Do you want to make any quary regarding your Laptop? Type 'yes' or 'No' " << endl;
//     cin >> make_a_quary;

//     for (int i = 0; make_a_quary == "yes"; ++i)
//     {

//         cout << "Can you please tell me your Laptop name, so that we can make a quary for your Laptop?" << endl;
//         cin >> object_name;



//         // Laptop newObject(object_name);       // to call an object in an array by name like "objects[newObject]", we needed to create a object_name holder which in this case is 'newObject'.
//         // objects.push_back(newObject);
//         objects.push_back(object_name); // Here we directly push the 'object_name' into our "objects" vector, to access any object_name from this array we need to use index variable like "objects[0]"

//         cout << "Can you please tell me your Laptop's software configuration?" << endl;
//         cin >> software_configuration;

//         cout << "Can you please tell me your Laptop's processor name?" << endl;
//         // cin >> processor;
//         cin.ignore();
//         getline(cin, processor);

//         objects_data.push_back(Laptop(software_configuration, processor, 16));

//         cout << "Do you want to make any quary regarding your Laptop? Type 'yes' or 'No' " << endl;
//         cin >> make_a_quary;

//         // objects[0] = Laptop(software_configuration, processor, 16);
//         // cout << objects[0].getInformations() << endl;

//         // Laptop DELL; // Default Operator invoked.
//         // Laptop DELL("Windows", "Intel Core", 16); // Parameter Constructor invoked.
//         // cout << DELL.getInformations() << endl;

//         // Laptop HP = DELL;
//         // cout << HP.getInformations() << endl;
//     }

//     cout << "Do you wanna check any of the quary that are already being registered? Then, type your Laptop name." << endl;
//     cin >> check_a_quary;

//     for(int j =0; j < objects.size(); ++j){

//         if(objects[j] == check_a_quary){

//             cout << "So your Laptop name is" << objects[j] << endl;
//             objects_data[j].getInformations();
//         }
//     }

//     return 0;
// }

// ################### Create a program which can swap two values ###############################

// int main(){

//     int a = 2;
//     int b = 4;

//     int temp = a;

//     a = b;
//     b = temp;

//     cout << "Value of A is " << a << endl;
//     cout << "Value of B is " << b << endl;
//     return 0;
// }




// int main(){

//     int arr[] = {-1, -3, 0, 10, 15, 16, 20, 27, 30, 70, 100, 110};

//     int target;
//     int lowest_index_value = 0;
//     int highest_index_value = 11 ;
//     int mid_index_value = 0;

//     cout << "Type a value which you want to find in the database" << endl;
//     cin >> target;

    

//     while(arr[mid_index_value] != target){

//         mid_index_value = (lowest_index_value + highest_index_value)/2;

//         if (arr[mid_index_value] > target){
//             highest_index_value = mid_index_value - 1;
//         }

//         else if (arr[mid_index_value] < target)
//         {
//             lowest_index_value = mid_index_value +1;
//         }
//         else {
//             cout << mid_index_value << endl;
//             return 0;
//         }   
//     }
//     cout << mid_index_value << endl;

//     return 0;
// }

// ######### Now we will try to find first occurance of any number in an array using binary search ######## 15, 16, 20, 27, 27, 27, 27, 30, 70, 100, 110

// int main(){

//     int arr[] = {-3, -3, -1, -1, 0, 10, 11, 13, 14, 15, 15 };

//     int target, lowest_index_value = 0, highest_index_value = sizeof(arr) / sizeof(arr[0]) - 1; //mid_index_value = (lowest_index_value + highest_index_value)/2 ;

//     cout << "Type a value which you want to find in the database" << endl;
//     cin >> target;

//     while(lowest_index_value <= highest_index_value){

//         int mid_index_value = (lowest_index_value + highest_index_value)/2;

//         if (mid_index_value != 0 && arr[mid_index_value] > target){
//             highest_index_value = mid_index_value - 1;
//         }

//         else if (mid_index_value != 0 && arr[mid_index_value] < target)
//         {
//             lowest_index_value = mid_index_value +1;
//         } 
//         else if (mid_index_value != 0 && arr[mid_index_value] == target && arr[mid_index_value -1] == target){

//             highest_index_value = mid_index_value - 1;
//         }
//         else if (arr[mid_index_value] == target && arr[mid_index_value -1] != target){
//             cout << mid_index_value << endl;
//             return 0;
//         } 
//         else if (mid_index_value == 0 && arr[mid_index_value] == target){
//             cout << mid_index_value << endl;
//             return 0;
//         } 
//         else if (mid_index_value == 0 && arr[mid_index_value + 1] == target){
//             cout << mid_index_value + 1 << endl;
//             return 0;
//         }
        
//     }
//     cout << -1 << endl;
//     return 0;
// }

// int main (){

//     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10};

//     int lowest_index = 0, highest_index = sizeof(arr) / sizeof(arr[0]) -1, mid_index, missing_value;

//     while(highest_index >= lowest_index){

//         mid_index = (highest_index + lowest_index)/2;

//         if(arr[mid_index] == mid_index){
//             lowest_index = mid_index + 1;
//         }
//         else{
//             missing_value = mid_index;
//             highest_index = mid_index -1;
//         }
//     }
//     cout << "Missing value is " << missing_value << endl;
//     return 0;
// }


// ####### Here we are working on Single Linked List ###########

// class Node{

//     public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void linkedAtFirst(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void linkedAtLast(Node* &head, int val){

//     Node* new_node = new Node(val);
//     Node* counter = head;
//     while(counter->next != NULL){
//         counter = counter->next;
//     }
//     counter->next = new_node;
// }

// void linkedAtNthPosition(Node* &head, int val, int pos){

//     Node* new_node = new Node(val);
//     Node* counter = head;
//     int counter_position = 0;
//     while(counter_position != pos-1){
//         counter = counter->next;
//         counter_position+=1; 
//     }
//     new_node->next = counter->next;
//     counter->next = new_node;

// }

// void DeletionofFirstNode(Node* &head){

//     Node* counter = head;
//     counter = counter->next;
//     head = counter;
// }

// void DeletionofLastNode(Node* &head){

//     Node* counter = head;
//     Node* temp = head;
//     while(counter->next != NULL){
//         counter = counter->next;
//         if(counter->next != NULL){
//             temp = temp->next;
//         }
//     }
//     temp->next = NULL;
// }

// void DeletionofNthNode(Node* &head, int pos){

//     Node* counter = head;
//     Node* temp = head;
//     int index_number = 0;
//     while(index_number != pos){
//         counter = counter->next;
//         if(index_number != pos-1){
//             temp = temp->next;
//         }
//         index_number+=1;
//     }
//     temp->next = counter->next;

// }

// void Display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main(){

//     Node* head = NULL;
//     // Node* n = new Node(2);
//     linkedAtFirst(head, 2);
//     Display(head);
//     linkedAtFirst(head, 1);
//     Display(head);
//     linkedAtLast(head, 3);
//     Display(head);
//     linkedAtNthPosition(head, 4, 3);
//     Display(head);
//     // DeletionofFirstNode(head);
//     // Display(head);
//     // DeletionofLastNode(head);
//     // Display(head);
//     DeletionofNthNode(head, 2);
//     Display(head);

//     return 0;
// }


// ##########  Now we will work on stack data structures ###########
// #define n 100
// class stack{

//     int* arr;
//     int top;

//     public:
//     stack(){
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x){
//         if(top == n-1){
//             cout << "Stack memory is already full" << endl;
//             return;
//         }
        
//         top++;
//         arr[top]= x;
//     }

//     void pop(){
//         if(top == -1){
//             cout << "There is no memeory to remove" << endl;
//             return;
//         }

//         top--;
//     }

//     int Top(){
//         if(top == -1){
//             cout << "there's no top value present here" << endl;
//             return -1;
//         }
        
//         return arr[top];
//     }

//     bool empty(){
//         return top == -1;
//     }
// };

// int main(){

//     stack first_stack;
//     first_stack.push(1);
//     first_stack.push(2);
//     first_stack.push(3);
//     first_stack.push(4);
//     cout << first_stack.Top() << endl;
//     first_stack.pop();
//     first_stack.pop();
//     cout << first_stack.Top() << endl;
//     return 0;
// }


// ######## Now we'll Reverse a Sentence using Stack fundamentals ###########
//  How's going everything for you,dear?
// void Reverse_a_Sentence(string s){

//     string word = "";

//     stack <string> st;

//     for(int i=0; i < s.length(); ++i){

//         while(s[i] != ' ' && i < s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//         word = "";
        
//     }
//     while(!st.empty()){

//         cout << st.top() << " ";
//         st.pop();
        
//     }cout << endl;
// }

// int main(){
    
//     string s = "How's going everything for you, dear?";
//     Reverse_a_Sentence(s);

// }


// Here we try to find the sum of all nodes values that exist in a binary tree

// class Node{

//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int data){
//         val = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// //                 1
// //              /     \
// //             /       \
// //            2         3
// //          /    \     / \
// //         4      5   6   7
// //        / \    / 
// //       8   9 10 

// void sumReplacement(Node* root){

//     if (root == NULL){
//         return;
//     }

    
//     sumReplacement(root->left);
//     sumReplacement(root->right);
//     if(root->left != NULL){
//         root->val += root->left->val;
//     }
//     if(root->right != NULL){
//         root->val += root->right->val;
//     } 


// }

// void PreOrderTraversal(Node* root) {
//     if (root == NULL) {
//         return;
//     }

//     cout << root->val << " ";
// //     PreOrderTraversal(root->left);
// //     PreOrderTraversal(root->right);
// }

// int main(){

//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     // root->left->left = new Node(4);
//     // root->left->right = new Node(5);
//     // root->right->left = new Node(6);
//     // root->right->right = new Node(7);
//     // root->left->left->left = new Node(8);
//     // root->left->left->right = new Node(9);
//     // root->left->right->left = new Node(10);

//     PreOrderTraversal(root);
//     cout << "\n";
//     sumReplacement(root);
//     // cout << "\n";
//     PreOrderTraversal(root);

//     cout << "\n";

//     return 0;

// }



// Now we will check if our binary tree is balanced or not? For that we will first check 
// left nodes of the tree, then right nodes and finally the root node. If any of the 
// left nodes or right nodes or current nodes (difference between left and right nodes) becomes
// greater than 1, then we will term that node as unbalanced node or else the node will be
// balanced. 


// class Node{

//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int data){
//         val = data;
//         left = NULL;
//         right = NULL;
//     }
// };


// //              1
// //             / 
// //            2   
// //           /    
// //          3 

// int height(Node* root){

//     if(root == NULL){
//         return 0;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return max(lh, rh) + 1;
// }

// bool isBalanced(Node* root){
//     if(root == NULL){
//         return true;
//     }

//     // In this below code, is one of our left or right node unbalanced or not, if it so
//     // then, the whole tree will be unbalanced.

//     if(isBalanced(root->left) == false){
//         return false;
//     }
//     else if (isBalanced(root->right) == false)
//     {
//         return false;
//     }

//     // In this below code, we checked if our current node (difference between left and right node)
//     // is balanced or not.

//     int lh, rh;
//     lh = height(root->left);
//     rh = height(root->right);
//     if(abs(lh - rh) <= 1){
//         return true;
//     }else{
//         return false;
//     }

    
// }

// int main(){

//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->left->left = new Node(3);

    
//     if(isBalanced(root) == true){
//         cout<< "The tree is balanced" << "\n";
//     }
//     else{
//         cout<< "The tree is unbalanced" << "\n";
//     }
//     return 0;

// }


// class Node{

//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int data){
//         val = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// //                 1
// //              /     \
// //             /       \
// //            2         3
// //          /    \     / \
// //         4      5   6   7
// //        / \    / 
// //       8   9 10 

// int sum=0;
// int AddValues(Node* root, int value){

//     if(!root){
//         return 0;
//     }
//     value *= 10;
//     value += root->val;
    
//     if(!root->left && !root->right){
//         sum+=value;
//     }
//     AddValues(root->left,value);
//     AddValues(root->right,value);

//     return sum;
    
// }

// int main(){

//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     // root->left->left = new Node(4);
//     // root->left->right = new Node(5);
//     // root->right->left = new Node(6);
//     // root->right->right = new Node(7);
//     // root->left->left->left = new Node(8);
//     // root->left->left->right = new Node(9);
//     // root->left->right->left = new Node(10);
    

//     cout << AddValues(root, 0) << endl;

//     return 0;



// }

class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

//            First Tree
//                 1
//              /     \
//             /       \
//            2         3
//          /    
//         4  

//            Second Tree
//                 1
//              /     \
//             /       \
//            2         3
//                     /
//                    6


Node* SumofTwoTrees(Node* root, Node* root1){

    if(!root && !root1){ 
        return NULL;
    }
    Node* totalSum = new Node((root ? root->val : 0) + (root1 ? root1->val : 0));
    totalSum->left = SumofTwoTrees((root ? root->left : NULL), (root1 ? root1->left : NULL));
    totalSum->right = SumofTwoTrees((root ? root->right : NULL), (root1 ? root1->right : NULL));

    return totalSum;
    
}

void PreOrderTraversal(Node* totalSum){

    if(!totalSum){
        return;
    }
    cout << totalSum->val << "->";
    PreOrderTraversal(totalSum->left);
    PreOrderTraversal(totalSum->right);
}

int main(){

    // First tree 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    
    // Second Tree
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->right->left = new Node(6);

    // Total Sum Tree

    Node* totalSum = SumofTwoTrees(root, root1);
    PreOrderTraversal(totalSum);
    cout << "NULL" << endl;
    return 0;
}