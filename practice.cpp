// // Smallest and Largest element in array

// #include<iostream>
// using namespace std;

// int smallest(int arr[],int size){
// 	int temp = arr[0];
// 	for(int i=0;i<size;i++){
// 		if(temp>arr[i]){
// 			temp = arr[i];
// 		}
// 	}
// 	return temp;
// }

// int largest(int arr[],int size){
//         int temp = arr[0];
//         for(int i=0;i<size;i++){
//                 if(temp<arr[i]){
//                         temp = arr[i];
//                 }
//         }
//         return temp;
// }

// int main(){
// 	int size;
// 	cout<<"Enter the size of the array: ";
// 	cin>>size;
// 	int arr[size];
// 	for(int i=0;i<size;i++){
// 		cout<<"Enter the "<<i<<"th element: ";
// 		cin>>arr[i];
// 	}
// 	cout<<smallest(arr,size);
// 	cout<<largest(arr,size);
// 	return 0;
// }

/*
    Linked List
*/

// #include<iostream>
// using namespace std;

// class Node{

//     public:
//         int data;
//         Node* next;
//         Node(int data){
//             this->data=data;
//             this->next=NULL;

//         }

// };
// void insertathead(Node* &head,int data){
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }

// void insertattail(Node* &tail,int data){
//     Node* temp = new Node(data);
//     tail -> next = temp;
//     tail=temp;
// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// void insertAtPosition(Node* &tail,Node* &head, int data, int position){
// 	Node* temp = head;
//     int t=1;
//     if(position==1){
//         insertathead(head,data);
//         return;
//     }
//     while(t!=position-1){
//         temp = temp->next;
//         t++;
//     }
//     Node* t2=temp->next;
//     Node* insert= new Node(data);
//     temp->next= insert;
//     insert->next=t2;
// }

// void deleteNode(Node* &head, int position){
//     Node* temp = head;
//     int t = 1;
//     while(t!=position-1 && position>1){
//         temp = temp->next;
//         t++;
//     }
//     if(position==1 || position==0){
//         head = temp->next;
//         temp->next = NULL;
//     }
//     else{
//         temp->next = temp->next->next;
//     }
// }

// void reverse(Node* &head){
//     Node* temp = head;
//     Node* back = head;
//     Node* front = head;
//     int t=1;
//     while(front->next!=NULL){
//         if(t==1){
//             front = front->next;
//             back->next = NULL;
//             t++;
//         }
//         else{
//             temp = front;
//             front = front->next;
//             temp->next = back;
//             back = temp;
//             head = temp;
//             t++;
//         }
//     }

//     if(front->next==NULL){
//         temp = front;
//         temp->next = back;
//         head = temp;
//     }
// }

// void reverse_recursion(Node* &head, Node* curr, Node* prev){
//     if(curr==NULL){
//         head = prev;
//         return;
//     }
//     reverse_recursion(head, curr->next, curr);
//     curr->next = prev;
// }

// Node* reverse_recursion2(Node* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* reversed_head = reverse_recursion2(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     // cout<<head->data<<endl;
//     return reversed_head;
// }
// void middleof_ll(Node* head){
//     Node* temp = head;
//     Node* middle = head;
//     int n = 0;
//     if(head!= NULL){
//         while(temp != NULL){
//             n++;
//             temp = temp->next;
//         }
//         for(int i=0;i<n/2;i++){
//             middle=middle->next;
//         }
//         cout<<middle->data<<endl;
//     }
//     else{
//         cout<<"There is no element in the Linked List."<<endl;
//     }

// }
// void middleof_ll2(Node* head){
//     if(head == NULL){
//         cout<<"Linked list is empty"<<endl;
//         return;
//     }
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         // cout<<slow->data<<endl;
//         fast = fast->next->next;
//     }

//     cout<<slow->data<<endl;
// }

// int main(){
//     Node* Node1 = new Node(11);
//     // cout<<Node1->data<<endl;
//     // cout<<Node1->next<<endl;

//     Node* head = Node1;
//     Node* tail = Node1;

//     // display(head);
//     insertathead(head,9);
//     insertattail(tail,12);
//     // display(tail);
//     insertathead(head,15);
//     insertattail(tail,13);
//     // display(head);
//     // insertAtPosition(tail,head,76,1);
//     display(head);
//     // deleteNode(head,5);
//     // display(head);
//     insertAtPosition(tail,head,67,1);
//     display(head);
//     // deleteNode(head,5);
//     // display(head);
//     // reverse(head);
//     reverse_recursion(head,head,NULL);
//     display(head);
//     middleof_ll(head);
//     middleof_ll2(head);
//     Node* reversed = reverse_recursion2(head);
//     display(reversed);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int data)
//     {
//         this->next = NULL;
//         this->prev = NULL;
//         this->data = data;
//     }
// };

// void insertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
// }

// void insertAtTail(Node *&tail, int data)
// {
//     Node *temp = new Node(data);
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void insertAtPosition(Node *&head, Node *&tail, int data, int position)
// {
//     Node *temp = head;
//     int t = 1;
//     while (t!=position - 1 && position > 0)
//     {
//         temp = temp->next;
//         t++;
//     }
//     if (position == 1)
//     {
//         insertAtHead(temp, data);
//     }
//     else if (temp->next == NULL)
//     {
//         insertAtTail(tail, data);
//     }
//     else
//     {
//         Node *newNode = new Node(data);
//         newNode->next = temp->next;
//         temp->next->prev = newNode;
//         temp->next = newNode;
//         newNode->prev = temp;
//     }
// }

// void deleteAtPos(Node* &head, Node* &tail, int position)
// {
//     Node *temp = head;
//     int t = 1;
//     while (t != position)
//     {
//         temp = temp->next;
//         t++;
//     }
//     if (temp->prev == NULL)
//     {
//         temp->next->prev = NULL;
//         head = temp->next;
//     }
//     else if (temp->next == NULL){
//         temp->prev->next = NULL;
//         tail = temp->prev;
//     }
//     else{
//     temp->prev->next = temp->next;
//     temp->next->prev = temp->prev;
//     }
// }

// void display(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {

//     Node *n1 = new Node(10);
//     Node *head = n1;
//     Node *tail = n1;
//     display(head);
//     insertAtHead(head, 11);
//     display(head);
//     insertAtTail(tail, 12);
//     display(head);
//     insertAtTail(tail, 13);
//     display(head);
//     insertAtPosition(head, tail, 17, 5);
//     display(head);
//     deleteAtPos(head, tail, 2);
//     display(head);
//     return 0;
// }

// Circular Linked List
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }
// };

// void insertAtPos(Node* &tail, int d, int val = 0){
//     if(tail==NULL){
//         Node* temp = new Node(d);
//         tail = temp;
//         tail->next = temp;
//     }
//     else{
//     Node* temp = tail;
//     while(temp->data != val){
//         temp=temp->next;
//     }
//     Node* newNode = new Node(d);
//     newNode->next = temp->next;
//     temp->next = newNode;
//     tail = newNode;
//     }
// }

// void deleteAtPos(Node* &tail, int val){
//     if(tail == NULL){
//         cout<<"List is mty";
//         return;
//     }
//     else{
//         Node* prev = tail;
//         Node* curr = prev->next;
//         while(curr->data!=val){
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//     }
// }

// void display(Node* &tail){
//     Node* temp = tail;
//     int t1 = temp->data;
//     do{
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     while(temp->data!=t1);
// }
// int main(){

//     Node* tail = NULL;
//     insertAtPos(tail,11);
//     display(tail);
//     insertAtPos(tail,10,9);
//     display(tail);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum = sum(n-1);
//     return n+prevSum;
// }

// int power(int n, int times){
//     if(times==0){
//         return 1;
//     }
//     return n*power(n,times-1);
// }

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// bool isSort(int* &arr, int size){
//     if(arr[size-1]>isSort(arr,size-2) && size>=0){
//         return true;
//     }
//     return false;
// }

// int binary_search(int* &arr, int key, int size){
//     int start=0,end=size-1,mid;
//     for(int i=0;i<end;i++){
//         mid=start+end/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid++;
//         }
//         else if(arr[mid]>key){
//             start=0;
//             end=mid--;
//         }
//     }
// }

// int main(){
//     // cout<<sum(10)<<endl;
//     // cout<<power(1,3)<<endl;
//     // cout<<factorial(6)<<endl;
//     int arr[8] = {4,5,6,7,9,11,13,14};
//     int* p=arr;
//     cout<<isSort(p,8)<<endl;
//     // cout<<binary_search(p,13,8)<<endl;
//     return 0;
// }

// delete at position using recursion
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int data){
//             this->data=data;
//             this->next=NULL;
//         }
// };

// void deleteAtPos(Node* &head, int position, int current){
//     if(current==position-1){
//         head->next = head->next->next;
//         return;
//     }

// }

// int main(){

//     return 0;
// }

/*
    assuming third delete karna hai, start mai head first pe hoga

    |1,add1|->|2,add2|->|3,add3|->|4,NULL|

    |                   p


*/

/*
    Stack Data Structure

    Stack works on the principal of LIFO that is Last in First Out
    so the last element entered in the stack is the first element to be popped out of the stack

    some real life examples of stacks are:
        1. Shaadi ki plates
        2. shuttles ka dabba
*/

// Using STL
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack <int> s1;
//     s1.push(10);
//     s1.push(20);
//     s1.pop();
//     cout<<s1.size()<<endl;
//     s1.emplace(100);
//     cout<<s1.size()<<endl;
//     return 0;
// }

// Using Array

// #include<iostream>
// using namespace std;

// class Stack{
//     int size,top;
//     int* arr;
//     public:
//         Stack(int size){
//             this->size = size;
//             arr = new int(size);
//             top = -1;
//         }
//         void push(int data){
//             if(top!=-1){
//                 if(top!=size-1){
//                     arr[++top] = data;
//                 }
//                 else{
//                     cout<<"Stack is Full !!!"<<endl;
//                 }
//             }
//             else{
//                 arr[++top] = data;
//             }
//         }

//         void pop(){
//             if(top!=-1){
//                 top--;
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//         }

//         void display(){
//             for(int i=top;i!=-1;i--){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     Stack s1(10);
//     s1.push(11);
//     s1.push(12);
//     s1.push(13);
//     s1.display();
//     s1.pop();
//     s1.display();
//     s1.pop();
//     s1.display();
//     s1.pop();
//     s1.display();
//     s1.pop();
//     s1.display();
//     s1.push(13);
//     s1.display();
//     s1.push(11);
//     s1.push(12);
//     s1.display();
//     s1.pop();
//     s1.display();
//     return 0;

/*
    Binary Tree -> which has <= 2 child nodes
      (2) -> Root Node
      /|\
    (1)(3)(4)
     /|     \
  (11)(5)    (23)
*/

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int data){
//             this->data=data;
//             this->left=NULL;
//             this->right=NULL;
//         }
//         Node(){};
// };

// Node* buildTree(){
//     int data;
//     cout<<"Enter data: ";
//     cin>>data;
//     Node* r = new Node(data);
//     if(data==-1){
//         return NULL;
//     }
//     cout<<"Enter the data to be inserted in the left of "<<r->data<<endl;
//     r->left = buildTree();
//     cout<<"Enter the data to be inserted in right of "<<r->data<<endl;
//     r->right = buildTree();
//     return r;
// }

// void levelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty()) {
//         Node* temp = q.front();
//         q.pop();

//         if (temp == NULL) {
//             cout << endl;
//             if (!q.empty()) {
//                 q.push(NULL);
//             }
//         } else {
//             cout << temp->data << " ";
//             if (temp->left) {
//                 q.push(temp->left);
//             }
//             if (temp->right) {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// // Inorder LNR
// void inOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

// // Preorder NLR
// void preOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// // Postorder LRN
// void postOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root = buildTree();
//     // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
//     levelOrderTraversal(root);
//     return 0;
// }

// Reverse elements in a linked list in Groups of K
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int data){
//             this->data=data;
//             this->next=NULL;
//         }
// };

// void swap(Node* &n1, Node* &n2){
//     int temp = n1->data;
//     n1->data = n2->data;
//     n2->data = temp;
// }

// void reverse_kgroup(Node* &head, int k){
//     Node* front = head;
//     Node* back = head;
//     int initial = 0;
//     while(front->next!=NULL){
//         if(initial==0){
//             for(int i=1;i<k;i++){
//                 front=front->next;
//                 initial++;
//             }
//         }
//         swap(back,front);
//         for(int i=0;i<k;i++){
//             if(front==NULL){
//                 return;
//             }
//             back = back->next;
//             front = front->next;
//         }
//     }
//     swap(back,front);
// }

// void insertathead(Node* &head, int data){
//     Node* n1 = new Node(data);
//     if(head==NULL){
//         head = n1;
//     }
//     else{
//         n1->next = head;
//         head = n1;
//     }
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertathead(head,11);
//     insertathead(head,12);
//     insertathead(head,13);
//     insertathead(head,14);
//     insertathead(head,15);
//     insertathead(head,16);
//     insertathead(head,17);
//     // insertathead(head,18);
//     display(head);
//     reverse_kgroup(head,2);
//     display(head);
//     return 0;
// }

// Stack using ARRAY
// #include<iostream>
// using namespace std;

// class stack{
//     public:
//         int top,size;
//         int* arr;
//         stack(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->top = -1;

//         }

//         void push(int data){
//             if(top!=size-1){
//                 arr[++top] = data;
//             }
//             else{
//                 cout<<"Stack is full"<<endl;
//             }
//         }

//         void pop(){
//             if(top!=-1){
//                 top--;
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//         }

//         void peek(){
//             if(top!=-1){
//                 cout<<arr[top];
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//         }

//         bool isEmpty(){
//             if(top==-1){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         void display(){
//             if(top!=-1){
//                 for(int i=top;i!=-1;i--){
//                     cout<<arr[i]<<" ";
//                 }
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     stack s(5);
//     s.push(20);
//     s.push(21);
//     s.push(22);
//     s.push(23);
//     s.push(24);
//     s.push(25);
//     s.display();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.display();
//     s.peek();
//     return 0;
// }

// STACK USING LINKED LIST
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }

// };

// STACK USING LINKED LIST
// class stack{
//     public:
//         Node* head;
//         stack(int data){
//             this->head = new Node(data);
//         }
//         stack(){
//             this->head = NULL;
//         };

//         void push(int data){
//             Node* temp = new Node(data);
//             if(head!=NULL){
//                 temp->next = head;
//                 head = temp;
//             }
//             else{
//                 head = temp;
//             }
//         }

//         void pop(){
//             if(head!=NULL){
//                 head = head->next;
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//         }

//         void peek(){
//             if(head!=NULL){
//                 cout<<head->data<<endl;
//             }
//             else{
//                 cout<<"Stack is empty"<<endl;
//             }
//         }

//         bool isEmpty(){
//             if(head==NULL)
//                 return true;
//             else
//                 return false;
//         }

//         void display(){
//             Node* temp = head;
//             if(head!=NULL){
//                 while(temp!=NULL){
//                     cout<<temp->data<<" ";
//                     temp = temp->next;
//                 }
//             }
//             else{
//                 cout<<"Stack is empty";
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     stack s(10);
//     s.push(11);
//     s.push(12);
//     s.push(13);
//     s.push(14);
//     s.display();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.display();
//     s.peek();
//     cout<<s.isEmpty();
//     return 0;
// }

// QUEUE STL
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;
//     q.push(11);
//     q.push(12);
//     q.push(13);
//     q.push(14);
//     return 0;
// }

// QUEUE IMPLEMENTATION USING ARRAY
// #include<iostream>
// using namespace std;

// class queue{
//     public:
//         int* arr;
//         int front,rear;
//         int size;
//         queue(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->front = -1;
//             this->rear = -1;
//         }

//         void enqueue(int data){
//             if(rear!=size-1){
//                 arr[++rear] = data;
//                 front=0;
//             }
//             else{
//                 cout<<"Queue is full"<<endl;
//             }
//         }

//         void dequeue(){
//             if(front!=-1){
//                 front++;
//             }
//             else{
//                 cout<<"Queue is empty"<<endl;
//             }
//         }

//         void peek(){
//             if(front!=-1)
//                 cout<<arr[front]<<endl;
//             else
//                 cout<<"Queue is empty"<<endl;

//         }

//         void display(){
//             for(int i=front;i<=rear;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     queue q(5);
//     q.enqueue(23);
//     q.enqueue(24);
//     q.enqueue(25);
//     q.enqueue(26);
//     q.enqueue(27);
//     q.display();
//     q.dequeue();
//     q.dequeue();
//     q.display();
//     q.peek();
//     return 0;
// }

// CIRCULAR QUEUE IMPLEMENTATION USING ARRAY
//  #include<iostream>
//  using namespace std;

// class circularQueue{
//     public:
//         int* arr;
//         int size, front, rear;
//         circularQueue(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->front = -1;
//             this->rear = -1;
//         }

//         void enqueue(int data){
//             if((front==0 && rear==size-1)||(rear==front-1)){
//                 cout<<"Queue is full"<<endl;
//             }
//             else if(front==-1){
//                 arr[++rear] = data;
//                 front++;
//             }
//             else if(rear==size-1 && front!=0){
//                 rear = 0;
//                 arr[rear] = data;
//             }
//             else{
//                 arr[++rear] = data;
//             }
//         }

//         void dequeue(){
//             if(rear==front==-1){
//                 cout<<"Queue is empty"<<endl;
//             }
//             else if(front==size-1){
//                 front = 0;
//             }
//             else{
//                 front++;
//             }
//         }

//         void peek(){
//             cout<<arr[front];
//         }
// };

// int main(){
//     circularQueue c(5);
//     c.enqueue(45);
//     c.enqueue(46);
//     c.enqueue(47);
//     c.enqueue(48);
//     c.enqueue(49);
//     c.enqueue(50);
//     c.dequeue();
//     c.enqueue(50);
//     c.enqueue(51);
//     c.peek();

//     return 0;
// }

// BINARY TREE

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* right;
//         Node* left;
//         Node(int data){
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//         }
// };

// Node* builTree(){
//     int data;
//     cout<<"Enter data: ";
//     cin>>data;
//     Node* temp = new Node(data);
//     if(data==-1){
//         return NULL;
//     }
//     cout<<"Enter data to be inserted in left of "<<temp->data<<endl;
//     temp->left = builTree();
//     cout<<"Enter data to be inserted in right of "<<temp->data<<endl;
//     temp->right = builTree();
//     return temp;
// }

// void levelOrderTraversal(Node* tree){
//     queue <Node*> q;
//     q.push(tree);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main(){
//     Node* tree = builTree();
//     levelOrderTraversal(tree);
// }

// BINARY SEARCH TREE

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *right;
//     Node *left;
//     Node(int data)
//     {
//         this->data = data;
//         this->right = NULL;
//         this->left = NULL;
//     }
// };

// BST FROM A PRE ORDER ARRAY
// Node* BST(int* arr, int& pos, int n, Node* root) {
//     if (pos >= n) {
//         return root;
//     }

//     Node* temp = new Node(arr[pos++]);
//     if (root == NULL) {
//         root = temp;
//     }

//     if (pos < n && arr[pos] < root->data) {
//         root->left = BST(arr, pos, n, root->left);
//     }

//     if (pos < n && arr[pos] > root->data) {
//         root->right = BST(arr, pos, n, root->right);
//     }

//     return root;
// }

// BST FROM AN ARBITARARY ARRAY
// Node *BST_Arbitraryarr(Node *root, int data)
// {
//     Node *r = new Node(data);
//     if (root == NULL)
//     {
//         root = r;
//     }
//     if (data > root->data)
//     {
//         root->right = BST_Arbitraryarr(root->right, data);
//     }
//     if (data < root->data)
//     {
//         root->left = BST_Arbitraryarr(root->left, data);
//     }
//     return root;
// }

// Node *input(int *arr, int size)
// {
//     Node *temp = NULL;
//     for (int i = 0; i < size; i++)
//     {
//         temp = BST_Arbitraryarr(temp, arr[i]);
//     }
//     return temp;
// }

// void search_inBST(Node *root, int key)
// {
//     Node *temp = root;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             cout << key << " is present in tree" << endl;
//             return;
//         }
//         if (temp->data > key)
//         {
//             temp = temp->left;
//         }
//         if (temp->data < key)
//         {
//             temp = temp->right;
//         }
//     }
//     if (temp->data == key)
//     {
//         cout << key << " is present in the binary search tree." << endl;
//     }
//     else
//     {
//         cout << key << " is not present in the binaru search tree." << endl;
//     }
// }

// void minormax_inBST(Node* root){
//     Node* temp = root;
//     Node* temp2 = root;
//     int min = 0,max = 0;
//     // for min
//     while(temp->left!=NULL){
//         temp = temp->left;
//     }
//     min = temp->data;

//     while(temp2->right!=NULL){
//         temp2 = temp2->right;
//     }
//     max = temp2->data;

//     cout<<"Minimum element in the tree is "<<min<<" and maximum element in the tree is "<<max;

// }

// int min_inBST(Node *root)
// {
//     Node *temp = root;
//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp->data;
// }
// int max_inBST(Node *root)
// {
//     Node *temp2 = root;
//     while (temp2->right != NULL)
//     {
//         temp2 = temp2->right;
//     }
//     return temp2->data;
// }

// Node *deletion_inBST(Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     if (root->data == key)
//     {
//         // 0 child
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // 1 child
//         if (root->left != NULL && root->right == NULL)
//         {
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }

//         if (root->left == NULL && root->right != NULL)
//         {
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }

//         // 2 child
//         if (root->right != NULL && root->left != NULL)
//         {
//             int maxi = max_inBST(root->left);
//             root->data = maxi;
//             root->left = deletion_inBST(root->left, maxi);
//             return root;
//         }
//     }

//     else if (root->data > key)
//     {
//         root->left = deletion_inBST(root->left, key);
//         return root;
//     }

//     else
//     {
//         root->right = deletion_inBST(root->right, key);
//         return root;
//     }
// }

// void inOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }

// int main()
// {
//     int arr[] = {10, 14, 44, 42, 32, 34, 56, 61, 85, 5};
//     int *p = arr;
//     int pos = 0, size = 10;
//     // Node* root = BST(p,pos,size,NULL);
//     Node *root = input(p, size);
//     inOrder(root);
//     cout << endl;
//     search_inBST(root, 32);
//     deletion_inBST(root,10);
//     inOrder(root);
//     return 0;
// }


// HEAPS 

// #include<iostream>
// using namespace std;

// class heap{
//     public:
//         int arr[100];
//         int size;
//         heap(){
//             arr[0] = -1;
//             size = 0;
//         }

//         void insert(int data){
//             size++;
//             int index = size;
//             arr[index] = data;

//             while(index>1){
//                 int parent = index/2;
//                 if(arr[parent]<arr[index]){
//                     swap(arr[parent],arr[index]);
//                     index = parent;
//                 }
//                 else{
//                     return;
//                 }
//             }
//         }
        
//         void deletion(){
//             if(size==0){
//                 return;
//             }

//             int i = 1;
//             arr[1] = arr[size--];

//             while(i<size){
//                 int rightIndex = 2*i+1;
//                 int leftIndex = 2*i;
//                 if(arr[leftIndex]>arr[i] && leftIndex>size){
//                     swap(arr[i],arr[leftIndex]);
//                     i = leftIndex;
//                 }
//                 else if(arr[rightIndex]>arr[i] && rightIndex>size){
//                     swap(arr[i],arr[rightIndex]);
//                     i = rightIndex;
//                 }
//                 else{
//                     return ;
//                 }
//             }
//         }

//         void display(){
//             for(int i=1;i<=size;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main(){
//     heap h;
//     h.insert(23);
//     h.insert(24);
//     h.insert(25);
//     h.insert(26);
//     h.insert(27);
//     h.insert(28);
//     h.display();
//     h.deletion();
//     h.display();
//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    cout<<(8/10)%10;
    return 0;
}