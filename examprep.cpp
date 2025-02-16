// // DECIMAL TO BINARY AND BINARY TO DECIMAL
#include<iostream>
#include<cmath>
using namespace std;

// void binary_converter(int num){
//     int result=0,count=0;
//     while(num!=0){
//         result = (pow(10,count)*(num&1))+result;
//         num = num/2;
//         count++;
//     }
//     cout<<result<<endl;
// }

// void decimal_converter(int num){
//     int result=0,count=0,cond = pow(10,count);
//     while(num%cond!=num){
//         result = (((num/cond)%10)*pow(2,count))+result;
//         count++;
//         cond = pow(10,count);
//     }
//     cout<<result<<endl;
// }
int main(){
    // 8 4 2 1
    // 0 1 0 1
    // int bitwise_and = 9&1; // (10**0 * bitwise)+prev
    // cout<<bitwise_and<<endl;
    // int bitwise2_and = 4&1; // (10**0 * bitwise)+prev
    // cout<<bitwise2_and<<endl;
    // int bitwise3_and = 2&1; // (10**0 * bitwise)+prev
    // cout<<bitwise3_and<<endl;
    // int bitwise4_and = 1&1;
    // cout<<bitwise4_and<<endl;
    // int bitwise5_and = 0&1;
    // cout<<bitwise5_and<<endl;

    // binary_converter(8);
    // decimal_converter(111);
    return 0;
}

// BINARY SEARCH 

/*
    Binary search only works in montonic funcitions that is it can only be implemented in a sorted array 
    Time Complexity -> O(logn)
*/


// #include<iostream>
// using namespace std;

// int binary_search(int* arr, int size, int key){
//     int s = 0, e = size-1, mid=0;
//     while(s<=e){
//         mid = s + (e-s)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return -1;
// }

// void firstLastOccur(int* arr, int size, int key){
//     int s = binary_search(arr, size, key), last = s;
//         while(arr[s]==key){
//             s--;
//         }
//         while(arr[last]==key){
//             last++;
//         }
//         cout<<"First occurence of "<<key<<" is "<<s+1<<" and last occurence of "<<key<<" is "<<last-1<<endl;
    
// }

// void totalOccur(int* arr, int size, int key){
//     int s = binary_search(arr, size, key), last = s;
//         while(arr[s]==key){
//             s--;
//         }
//         while(arr[last]==key){
//             last++;
//         }
//         cout<<"Total Occuerence of "<<arr[++s]<<" is "<<last-s<<endl;
    
// }

// int mountain_peak(int* arr, int size){
//     int s=0,e=size-1;
//     bool highest = false;
//     while(highest!=true){
//         int mid = s + (e-s)/2;
//         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] || size <= 1){
//             highest = true;
//             return mid;
//         }
//         else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
// }
// // 0 2 1 0
// int main(){
//     int arr[] = {2,4,5,5,5,5,5,5,5,5,6,8};
//     cout<<binary_search(arr,11,4)<<endl;
//     firstLastOccur(arr,11,5);
//     totalOccur(arr,11,5);
//     int arr2[] = {0};
//     cout<<mountain_peak(arr2,1);
//     return 0;
// }

// SORTING 

// #include<iostream>
// using namespace std;

// // 1. SELECTION SORT
// void selection_sort(int* &arr, int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<=size-1;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

// // 2. BUBBLE SORT
// void bubble_sort(int* &arr, int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// // INSERTION SORT
// void insertion_sort(int* &arr, int size){
//     for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j;
//         for(j=i-1;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }

// void insertion_sortUsingWHILE(int* &arr, int size){
//     int i=1;
//     while(i!=size){
//         int temp = arr[i];
//         int j = i-1;
//         for(j;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//         i++;
//     }
// }

// void display(int* arr, int size){
//     for(int i=0;i<=size-1;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {4,2,6,1,9,11,2,5,7,45};
//     int* p = arr;
//     selection_sort(p,10);
//     display(p,10);
//     // bubble_sort(p,10);
//     // display(p,10);
//     // insertion_sort(p,10);
//     // display(p,10);
//     // insertion_sortUsingWHILE(p,10);
//     // display(p,10);
//     return 0;
// }

// RECURSION
// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;
 

// int fact(int n){
//     // BASE CASE
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int power(int n, int exp){
//     //BASE CASE
//     if(exp==0){
//         return 1;
//     }
//     return n*power(n,exp-1);
// }

// int print_count(int n){
//     // BASE CASE
//     if(n==0){
//         return n;
//     }
//     cout<<n<<" ";
//     return print_count(n-1);
// }

// // 0 1 1 2 3 5 8 13
// int fibo(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     return fibo(n-1)+fibo(n-2);
// }

// // Nth Stair 
// int distTakenToreachTheNstairusingonly1or2steps(int n){
//     if(n==0){
//         return 1;
//     }
//     if(n<0){
//         return 0;
//     }
//     return distTakenToreachTheNstairusingonly1or2steps(n-1)+distTakenToreachTheNstairusingonly1or2steps(n-2);
// }

// // SAY DIGITS -> digits will ge given as an input and the output should be number names of each digit
// void digitToNumberName(int n){
//     string arr[] = {"ZERO" ,"ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
//     if(n==0){
//         return ;
//     }
//     int digit = n%10;
//     n = n/10;
//     digitToNumberName(n);
//     cout<<arr[digit]<<" ";
// }

// bool isSorted(int* arr, int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         return isSorted(arr+1,size-1);
//     }
// }

// int arr_sum(int* arr, int size){
//     if(size==1 || size==0){
//         return *arr;
//     }
//     return *arr + arr_sum(arr+1,size-1);
// }

// bool linear_searchUSINGRECURSION(int* arr, int size, int key){
//     if(*arr==key){
//         return true;
//     }
//     if(size==1 || size==0){
//         return false;
//     }
//     return linear_searchUSINGRECURSION(arr+1,size-1,key);
// }

// int binary_searchUSINGRECURSION(int* arr, int key, int s, int e){
//     int mid = s+ (e-s)/2;
//     if(arr[mid]==key){
//         return mid;
//     }
//     if(s>e){
//         return -1;
//     }
//     else if(arr[mid]>key){
//         return binary_searchUSINGRECURSION(arr, key, s, mid);
//     }
//     else{
//         return binary_searchUSINGRECURSION(arr, key, mid+1, e);
//     }
// }

// void bubble_sortUSINGRECURSION(int* &arr, int size){
//     if(size==0 || size==1){
//         return ;
//     }
//     for(int i=0;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     bubble_sortUSINGRECURSION(arr, size-1);
// }

// void merger_milaap(int* arr, int s, int e){
//     int mid = s + (e-s)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int* first = new int(len1); 
//     int* second = new int(len2);

//     int mainArrayIndex = s;
//     for(int i=0;i<len1;i++){
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid+1;
//     for(int i=0;i<len2;i++){
//         second[i] = arr[mainArrayIndex++];
//     }

//     int index1 = 0; 
//     int index2 = 0; 
//     mainArrayIndex = s;

//     while(index1<len1 && index2<len2){
//         if(first[index1]>second[index2]){
//             arr[mainArrayIndex] = second[index2];
//             mainArrayIndex++;index2++;
//         }
//         else{
//             arr[mainArrayIndex] = first[index1];
//             mainArrayIndex++;index1++;
//         }
//     } 

//     while(index1<len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while(index2<len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }
// }

// void merge_sort(int* arr, int s, int e){
//     if(s>=e){
//         return ;
//     }

//     int mid = s + (e-s)/2;
//     merge_sort(arr, s, mid);

//     merge_sort(arr, mid+1, e);

//     merger_milaap(arr, s, e);   
// }

// void display(int* arr, int size){
//     for(int i=0;i<=size-1;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int*p = arr;
    // cout<<fact(5)<<endl;
    // cout<<power(5,3)<<endl;
    // print_count(5);
    // cout<<fibo(8)<<endl;
    // cout<<distTakenToreachTheNstairusingonly1or2steps(5)<<endl;
    // digitToNumberName(4513);
    // cout<<45<<endl;
    // int power = pow(10,0);
    // cout<<(45/power)%10<<endl;
    // power = pow(10,1);
    // cout<<(45/power)%10<<endl;
    // power = pow(10,2);
    // cout<<(45/power)%10<<endl;
    // bool a = isSorted(p,7);
    // if(a){
    //     cout<<"Array is Sorted.";
    // }
    // else{
    //     cout<<"Array is not Sorted.";
    // }
    // cout<<arr_sum(p,9);
    
    // bool b = linear_searchUSINGRECURSION(p,9,10);
    // if(b){
    //     cout<<"key is present in the array.";
    // }
    // else{
    //     cout<<"key is not present in the array.";
    // }

    // cout<<binary_searchUSINGRECURSION(p,5,0,8);
    // int arr2[] = {3,2,7,19,12,4};
    // int s = 0, e = 6;
    // int* p2 = arr2;
    // bubble_sortUSINGRECURSION(p2,6);
    // display(p2,6);
//     merge_sort(p2,s,e);
//     display(p2,6);
//     return 0;
// }

// LINKED LIST 

// SINGLY LINKED LIST 
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

// void addAtHead(Node* &head, int data){
//     Node* temp = head;
//     Node* n1 = new Node(data);
//     n1->next = temp;
//     head = n1;
// }

// void addAtTail(Node* &tail, int data) {
//     Node* n1 = new Node(data);
//     if (tail == NULL) {
//         tail = n1;
//         return;
//     }
//     tail->next = n1;
//     tail = n1;
// }

// void addAtPosition(Node* head, int data, int position){
//     Node* n1 = new Node(data);
//     if(head==NULL || position == 1){
//         head = n1;
//         return ;
//     }
//     int n=1;
//     Node* temp = head;
//     while(n!=position-1){
//         temp = temp->next;
//         n++;
//     }
//     Node* t = temp->next;
//     temp->next = n1;
//     n1->next = t;
// }

// void deleteAtPosition(Node* &head, int position){
//     if(head==NULL){
//         cout<<"The LL IS MTY"<<endl;
//         return;
//     }
//     int n=1;
//     Node* temp = head;
//     while(n<position-1 && temp->next!=NULL){
//         temp = temp->next;
//         n++;
//     }
//     temp->next = temp->next->next;
// }

// void middleofLL(Node* head){
//     if(head->next==NULL){
//         cout<<head->data;
//         return;
//     }
//     if(head!=NULL){
//         Node* fast = head;
//         Node* slow = head;
//         while(fast->next!=NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//             if(fast==NULL){
//                 break;
//             }
//         }
//         cout<<"MIDDLE OF LL is: "<<slow->data<<endl;
//         return;
//     }
//     cout<<"The LL IS MTY."<<endl;
// }

// void reverse(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return ;
//     }
//     Node* prev = NULL;
//     Node* front = head;
//     Node* temp = head;

//     while(temp!=NULL){
//         front = front->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//     }
//     head = prev;  
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* n1 = new Node(23);
//     Node* head = n1;
//     Node* tail = n1;
//     addAtTail(tail, 14);
//     addAtPosition(head, 10 , 3);
//     addAtPosition(head, 11 , 4);
//     addAtPosition(head, 12 , 5);
//     display(head);
//     addAtHead(head, 13);
//     display(head);
//     cout<<"BEFORE DELETION"<<endl;
//     addAtHead(head, 16);
//     display(head);
//     cout<<"after DELETION of element 5 "<<endl;
//     deleteAtPosition(head,5);
//     display(head);
//     cout<<"after DELETION of element 3 and 4 "<<endl;
//     deleteAtPosition(head,3);
//     // deleteAtPosition(head,4);
//     display(head);
//     middleofLL(head);
//     reverse(head);
//     display(head);
//     return 0;
// }

// DOUBLY LINKED LIST

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* prev;
//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//             this->prev = NULL;
//         }
// };

// void addAtHead(Node* &head, int data){
//     Node* temp = new Node(data);
//     if(head==NULL){
//         head = temp;
//         return;
//     }
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
// }

// void addAtTail(Node* &tail, int data){
//     Node* temp = new Node(data);
//     if(!tail){
//         tail = temp;
//         return;
//     }
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void addAtPosition(Node* &head, int data, int position){
//     Node* temp = head;
//     Node* n1 = new Node(data);
//     if(head==NULL && position==1){
//         head = n1;
//         return;
//     }

//     int t=1;
//     while(t!=position-1 && temp->next!=NULL){
//         temp = temp->next;
//         t++;
//     }
//     n1->next = temp->next;
//     temp->next = n1;
//     n1->next->prev = n1;
// }

// void deleteAtPosition(Node* head, int position){
//     Node* temp = head;
//     if(temp==NULL || temp->next==NULL){
//         head = NULL;
//         return;
//     }
//     int t=1;
//     while(t!=position-1 && temp->next!=NULL){
//         temp = temp->next;
//         t++;
//     }
//     if(temp->next->next==NULL){
//         temp->next->prev = NULL;
//         temp->next = NULL;
//         return;
//     }
//     temp->next->next->prev = temp;
//     temp->next = temp->next->next;
// }

// void reverse(Node* &head){
//     Node* temp = head;
//     if(temp==NULL || temp->next==NULL){
//         return;
//     }
//     Node* front = head;
//     Node* back = NULL;

//     while(temp!=NULL){
//         front=front->next;
//         temp->next = back;
//         temp->prev = front;
//         back = temp;
//         temp = front;
//     }
//     head = back;
// }

// void displaybyHEAD(Node* &head, Node* &tail){
//     Node* temp = head;
//     while(temp->next){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<temp->data<<endl;
//     tail = temp;
// }

// void displaybyTAIL(Node* &head, Node* &tail){
//     Node* temp = tail;
//     while(temp->prev){
//         cout<<temp->data<<" ";
//         temp = temp->prev;
//     }
//     cout<<temp->data<<endl;
//     head = temp;
// }

// int main(){
//     Node* n1 = NULL;
//     Node* head = n1;
//     Node* tail = n1;
//     addAtHead(head, 11);
//     addAtHead(head, 12);
//     addAtHead(head, 13);
//     addAtHead(head, 14);
//     addAtHead(head, 15);
//     displaybyHEAD(head,tail);
//     addAtTail(tail, 16);
//     addAtTail(tail, 17);
//     addAtTail(tail, 18);
//     addAtTail(tail, 19);
//     addAtTail(tail, 20);
//     displaybyHEAD(head,tail);
//     addAtPosition(head, 45, 5);
//     displaybyHEAD(head,tail);
//     deleteAtPosition(head, 5);
//     deleteAtPosition(head, 3);
//     deleteAtPosition(head, 6);
//     displaybyHEAD(head,tail);
//     reverse(head);
//     displaybyHEAD(head,tail);
//     return 0;
// }

// CIRCULAR LINKED LIST
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

// void addAtPosition(Node* &tail, int data, int val=0){
//     Node* n1 = new Node(data);
//     if(tail==NULL){
//         tail = n1;
//         n1->next = n1;
//         return;
//     }
//     Node* temp = tail;
//     while(temp->data!=val){
//         temp = temp->next;
//     }
//     n1->next = temp->next;
//     temp->next = n1;
// }

// void deleteAtPos(Node* &tail, int val){
//     if(tail==NULL || tail->next==tail){
//         tail = NULL;
//         return;
//     }
//     Node* prev = tail;
//     Node* temp = prev->next;
//     while(temp->data!=val){
//         temp = temp->next;
//         prev = prev->next;
//     }
//     prev->next = temp->next;
//     if(temp->data == tail->data){
//         tail=prev;
//     }
//     temp= NULL;
// }

// bool isCircular(Node* tail){            
//     Node* temp = tail->next;
//     int t = tail->data;
//     while(temp->data!=t && temp!=NULL){
//         temp = temp->next;
//     }
//     if(temp->data == t){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void display(Node* tail){
//     int t = tail->data;
//     if(tail==NULL){
//         cout<<"LL IS MTY"<<endl;
//         return;
//     }
//     Node* temp = tail->next;
//     while(temp->data!=t){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<t<<endl;
// }

// int main(){
//     Node* n1 = NULL;
//     Node* tail = n1;
//     addAtPosition(tail, 45);
//     addAtPosition(tail, 54, 45);
//     addAtPosition(tail, 36, 45);
//     display(tail);
//     deleteAtPos(tail, 45);
//     display(tail);
//     cout<<isCircular(tail);
//     return 0;
// }

// SORTING A LINKED LIST
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

// void addAtHead(Node* &head, int data){
//     Node* temp = head;
//     Node* n1 = new Node(data);
//     n1->next = temp;
//     head = n1;
// }

// void addAtTail(Node* &tail, int data) {
//     Node* n1 = new Node(data);
//     if (tail == NULL) {
//         tail = n1;
//         return;
//     }
//     tail->next = n1;
//     tail = n1;
// }

// void addAtPosition(Node* head, int data, int position){
//     Node* n1 = new Node(data);
//     if(head==NULL || position == 1){
//         head = n1;
//         return ;
//     }
//     int n=1;
//     Node* temp = head;
//     while(n!=position-1){
//         temp = temp->next;
//         n++;
//     }
//     Node* t = temp->next;
//     temp->next = n1;
//     n1->next = t;
// }

// /*
// 1-> 4 -> 9 -> 7 -> NULL
// |
// head 
// middle => 9
// left = s-mid 1-> 4 -> 9

// right = mid->next - e 
//  */
// Node* middle_ll(Node* head){
//     Node* slow = head;
//     Node* fast = head;
//     while(fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==NULL){
//             break;
//         }
//     }
//     return slow;
// }

// Node* merge(Node* head, Node* left, Node* right){
//     if (left==NULL)
//     {
//         return right;
//     }

//     if (right==NULL)
//     {
//         return left;
//     }
//     Node* ans = NULL;

//     if(left->data>right->data){
//         ans = right;
//         ans->next = merge(head, left, right->next);
//     }
//     else{
//         ans = left;
//         ans->next = merge(head, left->next, right);
//     }
    
//     return ans;
// }

// Node* merge_sort(Node* head){
//     if(head==NULL){
//         return head;
//     }
//     if(head->next){
//         return head;
//     }

//     Node* mid = middle_ll(head);
//     Node* right = mid->next;
//     Node* left = head;
//     mid->next = NULL;

//     merge_sort(left);
//     merge_sort(right);

//     merge(head ,left, right);
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* n1 = new Node(23);
//     Node* head = n1;
//     Node* tail = n1;
//     addAtTail(tail, 14);
//     addAtPosition(head, 10 , 3);
//     addAtPosition(head, 11 , 4);
//     addAtPosition(head, 12 , 5);
//     display(head);
//     addAtHead(head, 13);
//     display(head);
//     addAtHead(head, 16);
//     display(head);
//     merge_sort(head);
//     display(head);
//     return 0;
// }

// Stacks

// QUES - 2 Stacks in an array 
// #include<iostream>
// using namespace std;

// class Stack{    
//     public:
//         int top1, top2, size;
//         int* arr;
//         Stack(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->top1 = -1;
//             this->top2 = size;
//         }
        
//         void push1(int data){
//             if(top2-top1>=1){
//                 arr[++top1] = data;
//             }
//             else{
//                 cout<<"STACK IS FULL!"<<endl;
//             }
//         }
//         void push2(int data){
//             if(top2-top1>=1){
//                 arr[--top2] = data;
//             }
//             else{
//                 cout<<"STACK IS FULL!"<<endl;
//             }
//         }
//         void pop1(){
//             if(top1!=-1){
//                 top1--;
//             }
//             else{
//                 cout<<"STACK IS EMPTY"<<endl;
//             }
//         }
//         void pop2(){
//             if(top2!=size){
//                 top2++;
//             }
//             else{
//                 cout<<"STACK IS EMPTY"<<endl;
//             }
//         }
//         void peek1(){
//             if(top1!=-1)
//                 cout<<"Top element in stack 1 is: "<<arr[top1]<<endl;
//             else
//                 cout<<"STACK IS EMPTY"<<endl;
//         }
//         void peek2(){
//             if(top2!=size)
//                 cout<<"Top element in stack 2 is: "<<arr[top2]<<endl;
//             else
//                 cout<<"STACK IS EMPTY"<<endl;
//         }
// };

// int main(){
//     Stack s(5);
//     s.push1(3);
//     s.push1(6);
//     s.push1(2);
//     s.push2(5);
//     s.peek1();
//     s.peek2();
//     return 0;
// }

// NORMAL STACK IMPLEMENTATION

// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//         int top, size;
//         int* arr;
//         Stack(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->top = -1;
//         }

//         void push(int data){
//             if(top!=size-1){
//                 arr[++top] = data;
//             }
//             else{

//                 cout<<"STACK IS FULL"<<endl;
//             }
            
//         }

//         int pop(){
//             if(top!=-1){   
//                 int ele = arr[top];
//                 top--;
//                 return ele;
//             } 
//             else
//                 cout<<"STACK IS EMPTY"<<endl;
//                 return -1;
//             }

//         int space_used(){
//             return top+1;
//         }

// };

// int main(){
//     Stack s1(5);
//     s1.push(76);
//     s1.push(6);
//     s1.push(7);
//     // cout<<s1.space_used();
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;

// void remove_middle(stack<int> &s, int size, int curr){
//     if(curr==(size/2)){
//         s.pop();
//         return ;
//     }
//     int top = s.top();
//     s.pop();
//     remove_middle(s,size,s.size());
//     s.push(top);
// }

// bool valid_paranthesis(string expression){
//     stack<char> s;
//     for(int i=0;i<expression.length();i++){
//         if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{'){
//             s.push(expression[i]);
//         }
//         else{
//             char top = s.top();
//             if(expression[i]==')' && top == '(' || expression[i]=='}' && top == '{' || expression[i]==']' && top == '['){
//                 s.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//     }

//     if(s.empty()){
//         return true;
//     }
// }

// void sort_insert(stack<int> &s, int prevTop){
//     if(s.empty() || (!s.empty()) && prevTop>s.top()){
//         s.push(prevTop);
//         return;
//     }

//     int currTop = s.top();
//     s.pop();
    
//     sort_insert(s,prevTop);
//     s.push(currTop);
// }

// void sort_stack(stack<int> &s){
//     if(s.empty()){
//         return ;
//     }

//     int prevTop = s.top();
//     s.pop();
//     sort_stack(s);
//     sort_insert(s,s.top());
// }
// int main(){
//     // Reverse a string using stack 
//     // string name = "Ronak";
//     // stack <char> s1;
//     // for(int i=0;i<name.length();i++){
//     //     s1.push(name[i]);
//     // }

//     // string result = "";
//     // for(int i=0;i<name.length();i++){
//     //     char a = s1.top();
//     //     result.push_back(a);
//     //     s1.pop();
//     // }
//     // cout<<result<<endl;

//     // Reverse an array using a stack
//     stack <int>s2;
//     int arr[5] = {7,4,2,6,1};
//     for(int i=0;i<5;i++){
//         s2.push(arr[i]);
//     }
//     cout<<"Top of stack before sorting: "<<s2.top()<<endl;
//     // for(int i=0;i<5;i++){
//     //     int top = s2.top();
//     //     arr[i] = top;
//     //     s2.pop();
//     // }
//     // for(int i=0;i<5;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     // Remove middle element using stack
//     // for(int i=0;i<5;i++){
//     //     s2.push(arr[i]);
//     // }
//     // remove_middle(s2, 5, 5);
//     // cout<<s2.size();

//     // string paranthesis = "[](){}[{()}]";
//     // cout<<valid_paranthesis(paranthesis);
//     sort_stack(s2);
//     cout<<"Top of stack after sorting: "<<s2.top()<<endl;
//     return 0;
// }

// QUEUE IMPLEMENTATION Normal not circular

// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//         int front, rear, size;
//         int* arr;
//         Queue(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->front = -1;
//             this->rear = -1;
//         }

//         void enqueue(int data){
//             if(rear!=size-1){
//                 if(front==-1){
//                     front++;
//                 }
//                 arr[++rear] = data;
//             }
//             else{
//                 cout<<"Queue is full...."<<endl;
//             }
//         }

//         void dequeue(){
//             if(rear!=front){
//                 front++;
//             }
//             else{
//                 cout<<"Queue is empty..."<<endl;
//                 if(front>0){
//                     rear = front = 0;
//                 }
//             }
//         }

//         bool isEmpty(){
//             if(front==rear){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         void Front(){
//             if(!isEmpty()){
//                 cout<<arr[front]<<endl;
//             }
//             else{
//                 cout<<"Queue is empty..."<<endl;
//             }
//         }
// };

// int main(){
//     Queue q(5);
//     q.enqueue(34);
//     q.enqueue(4);
//     q.enqueue(3);
//     q.Front();
//     q.dequeue();
//     q.Front();
//     return 0;
// }

// Circular queue implementation using arrays

// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//         int front, rear, size;
//         int* arr;
//         Queue(int size){
//             this->size = size;
//             this->arr = new int(size);
//             this->front = -1;
//             this->rear = -1;
//         }

//         void enqueue(int data){
//             if(rear==size-1 && front==0 || rear==front-1){
//                 cout<<"Queue is full....."<<endl;
//             }
//             else{
//                 if(rear==size-1 && front>0){
//                     rear=-1;
//                 }
//                 if(front==-1){
//                     front++;
//                 }
//                 arr[++rear] = data;
//             }
//         }

//         void dequeue(){
//             if(rear==front || front==size && rear==0){
//                 cout<<"Queue is empty..."<<endl;
//                 return;
//             }
//             else{
//                 if(front==size-1){
//                     front=0;
//                     return;
//                 }
//                 front++;
//             }
//         }

//         void Front(){
//             if(front==rear){
//                 cout<<"Queue is empty"<<endl;
//             }
//             else{
//                 cout<<"Front element in the queue is: "<<arr[front];
//             }
//         }
// };

// int main(){
//     Queue q(5);
//     q.enqueue(45);
//     q.enqueue(44);
//     q.enqueue(46);
//     q.enqueue(47);
//     q.enqueue(48);
//     q.dequeue();
//     q.enqueue(4);
//     q.dequeue();
//     q.dequeue();
//     q.dequeue();
//     q.dequeue();
//     q.dequeue();
//     q.Front();
//     return 0;
// }


// BINARY TREES
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

// Node* buildTree(Node* root){
//     int data;
//     cout<<"Enter the data: ";
//     cin>>data;
//     if(data==-1){
//         return NULL;
//     }

//     root = new Node(data);

//     cout<<"Enter data to be inserted in the left of "<<root->data<<endl;
//     root->left = buildTree(root);

//     cout<<"Enter data to be inserted in the right "<<root->data<<endl;
//     root->right = buildTree(root);

//     return root;
// } 

// void levelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//     while(!q.empty()){
//         Node* top = q.front();
//         q.pop();
//         if(top==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<top->data<<" ";
//             if(top->left){
//                 q.push(top->left);
//             }
//             if(top->right){
//                 q.push(top->right);
//             }
//         }
//     }
// }

// void buildTree_fromLevelOrderTraversal(Node* &root){
//     queue<Node*> q;
//     int data;
//     cout<<"Enter root data: ";
//     cin>>data;
//     root = new Node(data);
//     q.push(root);

//     while(!q.empty()){
//         Node* top = q.front();
//         q.pop();

//         cout<<"Enter data to be inserted in left of "<<top->data<<": ";
//         int dataLeft;
//         cin>>dataLeft;

//         if(dataLeft!=-1){
//             top->left = new Node(dataLeft);
//             q.push(top->left);
//         }

//         cout<<"Enter data to be inserted in the right of "<<top->data<<": ";
//         int rightData;
//         cin>>rightData;

//         if(rightData!=-1){
//             top->right = new Node(rightData);
//             q.push(top->right);
//         }
//     }
// }

// int height_binaryTree(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int left = height_binaryTree(root->left);
//     int right = height_binaryTree(root->right);

//     int ans = max(left, right) + 1;

//     return ans;
// }

// int count_leafNodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     if(root->left==NULL && root->right==NULL){
//         return 1;
//     }

//     int left = count_leafNodes(root->left);
//     int right = count_leafNodes(root->right);

//     int ans = left+right;
//     return ans;
// }

// int heightOFBT(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int right = heightOFBT(root->right);
//     int left = heightOFBT(root->left);

//     int result = max(right,left)+1;

//     return result;
// }

// bool isBalanced(Node* root){
//     if(root->left==NULL && root->right==NULL){
//         return true;
//     }

//     int left = heightOFBT(root->left);
//     int right = heightOFBT(root->right);


//     if((max(left,right))-(min(left,right))<=1){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

// bool identical_tree(Node* root1, Node* root2){
//     if(root1==NULL && root2==NULL){
//         return true;
//     }

//     if(heightOFBT(root1)!=heightOFBT(root2)){
//         return false;
//     }

//     bool left = identical_tree(root1->left,root2->left);
//     bool right = identical_tree(root1->right,root2->right);

//     if(root1->data == root2->data && left==true && right==true){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// pair<bool, int> isSUMTREE(Node* root){
//     if(root==NULL){
//         pair<bool, int> p = make_pair(true,0);
//         return p;
//     }

//     if(root->left==NULL && root->right==NULL){
//         pair<bool, int> p = make_pair(true,root->data);
//         return p;
//     }

//     pair<bool, int> left = isSUMTREE(root->left);
//     pair<bool, int> right = isSUMTREE(root->right);

//     bool isLEFTSUMTREE = left.first;
//     bool isRIGHTSUMTREE = right.first;

//     int leftDATA = left.second;
//     int rightDATA = right.second;

//     bool ans = leftDATA + rightDATA == root->data; 
//     if(isLEFTSUMTREE && isRIGHTSUMTREE && ans){
//         pair<bool, int> p = make_pair(true,2*root->data);
//         return p;
//     }
//     else{
//         pair<bool, int> p;
//         p.first = false;
//         return p;
//     }

// }
// int main(){

//     Node* root = buildTree(root);
//     levelOrderTraversal(root);
//     Node* root2 = buildTree(root);
//     levelOrderTraversal(root);

//     // cout<<height_binaryTree(root);
//     // cout<<endl;
//     // Node* r = NULL;
//     // buildTree_fromLevelOrderTraversal(r);
//     // levelOrderTraversal(r);
//     // cout<<count_leafNodes(root)<<endl;
//     // cout<<isBalanced(root)<<endl;

//     bool yesORno = identical_tree(root, root2);

//     if(yesORno){
//         cout<<"TREES ARE IDENTICAL!!!!!!!!"<<endl;
//     }
//     else{
//         cout<<"TREES ARE NOT IDENTICAL!!!!!!!!"<<endl;
//     }

//     // 12 14 11 20 -1 -1 -1 19 -1 -1 3 -1 -1 
//     // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//     return 0;
// }


// BINARY SEARCH TREE

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int data){
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//         }
// };

// Node* insertINTOBST(Node* root, int data){
//     if(root==NULL){
//         root = new Node(data);
//         return root;
//     }

//     if(data>root->data){
//         root->right = insertINTOBST(root->right, data);
//     }

//     else{
//         root->left = insertINTOBST(root->left, data);
//     }

//     return root;
// }

// void levelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//     while(!q.empty()){
//         Node* top = q.front();
//         q.pop();
//         if(top==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<top->data<<" ";
//             if(top->left){
//                 q.push(top->left);
//             }
//             if(top->right){
//                 q.push(top->right);
//             }
//         }
//     }
// }

// bool search_inBST(Node* root, int key){
//     if(root==NULL){
//         return false;
//     }

//     if(root->data == key){
//         return true;
//     }

//     bool ans;
//     if(root->data>key){
//         ans = search_inBST(root->left, key);
//     }

//     else{
//         ans = search_inBST(root->right, key);
//     }

//     return ans;
// }

// void inOrder(Node* root){
//     if(root==NULL){
//         return ;
//     }

//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right); 
// }

// void preOrder(Node* root){
//     if(root==NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void postOrder(Node* root){
//     if(root==NULL){
//         return;
//     }

//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// int min_inBST(Node* root){
//     if(root->left==NULL){
//         return root->data;
//     }

//     int ans = min_inBST(root->left);
//     return ans;

// }

// Node* max_inBST(Node* root){
//     if(root->right==NULL){
//         return root;
//     }

//     Node* ans = max_inBST(root->right);
//     return ans;
// }

// Node* delete_inBST(Node* root, int key){
//     if(root==NULL){
//         return root;
//     }
//     Node* temp = root;
//     if(temp->data==key){
//         // 0 Child case
//         if(temp->left==NULL && temp->right==NULL){
//             delete temp;
//             return NULL;
//         }

//         // 1 child case 
//         // right child
//         if(temp->right!=NULL && temp->left==NULL){
//             Node* t = temp->right;
//             delete temp;
//             return t;
//         }

//         if(temp->right==NULL && temp->left!=NULL){
//             Node* t = temp->left;
//             delete temp;
//             return t;
//         }

//         // 2 child case 
//         if(temp->right!=NULL && temp->left!=NULL){
//             Node* max = max_inBST(temp->left);
//             temp->data = max->data;
//             temp->left = delete_inBST(temp->left,max->data);
//             return temp;
//         }
//     }

//     if(temp->data>key){
//         temp->left = delete_inBST(temp->left, key);
//     }

//     else{
//         temp->right = delete_inBST(temp->right, key);
//     }

//     return temp;
// }


// bool valid_BST(Node* root){
//     if(root->left==NULL && root->right==NULL){
//         return true;
//     }
//     if(root->left!=NULL && root->right==NULL){
//         if(root->left->data<root->data){
//             return true;
//         }
//     }
//     if(root->left==NULL && root->right!=NULL){
//         if(root->right->data>root->data){
//             return true;
//         }
//     }
//     if(root->left!=NULL && root->right!=NULL){
//         if(root->left->data<root->data && root->right->data>root->data){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     bool left = valid_BST(root->left);
//     bool right = valid_BST(root->right);

//     if(right && left){
//         return true;
//     } 
//     else{
//         return false;
//     }
// }

// void print_kSMALLESTELEMENT(Node* root, int k, int &count){
//     if(root==NULL){
//         return ;
//     }


//     print_kSMALLESTELEMENT(root->left, k, count);
//     count++;
//     if(k==count){
//         cout<<root->data;
//     }
//     print_kSMALLESTELEMENT(root->right, k, count);
    
// }

// void print_kLARGESTEMLEMENT(Node* root, int k, int &count, int size){
//     if(root==NULL){
//         return;
//     }

//     print_kLARGESTEMLEMENT(root->left, k,count, size);
//     count++;
//     if((size-k)==count){
//         cout<<root->data;
//     }
//     print_kLARGESTEMLEMENT(root->right, k, count, size);

// }

// Node* takeInput(Node* &root){
//     int data;
//     cin>>data;

//     while(data!=-1){
//         root = insertINTOBST(root,data);
//         cin>>data;
//     }

//     return root;
// }

// int main(){

//     Node* root = NULL;
//     root = takeInput(root);
    // // levelOrderTraversal(root);
    // inOrder(root);
    // cout<<endl;
    // preOrder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;

    // cout<<search_inBST(root, 90)<<endl;
    // cout<<min_inBST(root)<<endl;
    // cout<<max_inBST(root)<<endl;
    // root = delete_inBST(root, 8);
    // inOrder(root);
    // cout<<endl;
    // Node* root3 = new Node(1);
    // Node* root2 = new Node(8);
    // root2->right = root3; 
    // root2->left = new Node(89);
    // root2->left->left = new Node(0);
    // root2->right->right = new Node(6);
    // cout<<valid_BST(root2);

//     int count = 0;
//     print_kSMALLESTELEMENT(root, 1, count);
//     cout<<endl;
//     count = 0;
//     print_kLARGESTEMLEMENT(root, 4, count, 8);
//     cout<<endl;
//     return 0;
// }
//8 19 2 7 6 1 0 -1


// Heaps 

// MAX HEAP
// #include<iostream>
// using namespace std;

// class Heap{
//     public:
//         int size;
//         int arr[];

//         Heap(){
//             this->size = 0;
//             this->arr[size] = -1; 
//         }

//         void insert_INHEAP(int data){
//             size = size+1;
//             int index = size;
//             arr[index] = data;

//             while(index>1){
//                 int parent = index/2;
//                 if(arr[parent]<arr[index]){
//                     swap(arr[parent], arr[index]);
//                     index = parent;
//                 }
//                 else{
//                     return;
//                 }
//             }
//         }

//         void deletion_INHEAP(){
//             int index = 1;
//             arr[index] = arr[size];
//             size--;

//             while(index<=size){
//                 int left = 2*index;
//                 int right = 2*index+1;

//                 if(left<size && arr[left]>arr[index]){
//                     swap(arr[left],arr[index]);
//                     index = left;
//                 }
//                 else if(right<size && arr[right]>arr[index]){
//                     swap(arr[index], arr[right]);
//                     index=right;
//                 }

//                 else{
//                     return;
//                 }
//             }
//         }
//         void print(){
//             for(int i=1;i<=size;i++){
//                 cout<<arr[i]<<" ";
//             }
//         }
// };

// void max_heapify(int arr[], int size, int index){
//     int largest = index;
//     int left = 2*largest;
//     int right = 2*largest+1;

//     if(left<size && arr[largest]<arr[left]){
//         largest = left;
//     }

//     if(right<size && arr[largest]<arr[right]){
//         largest = right;
//     }

//     if(largest!=index){
//         swap(arr[largest], arr[index]);
//         max_heapify(arr,size,largest);
//     }
// }

// void min_heapify(int arr[], int size, int index){
//     int lowest = index;
//     int left = 2*lowest;
//     int right = 2*lowest+1;

//     if(left<size && arr[lowest]>arr[left]){
//         lowest = left;
//     }
//     if(right<size && arr[lowest]>arr[right]){
//         lowest = right;
//     }

//     if(lowest!=index){
//         swap(arr[lowest], arr[index]);
//         min_heapify(arr, size, lowest);
//     }
// }
// int main(){
//     Heap h;
//     h.insert_INHEAP(60);
//     h.insert_INHEAP(61);
//     h.insert_INHEAP(45);
//     h.insert_INHEAP(69);
//     h.insert_INHEAP(29);
//     h.insert_INHEAP(30);
//     h.insert_INHEAP(6);
//     h.print();
//     cout<<endl;
//     h.deletion_INHEAP();
//     h.print();


//     int size = 5;
//     int arr[] = {-1, 23, 56, 90, 24,45};
//     for(int i=size/2;i>0;i--){
//         max_heapify(arr, size, i);
//     }

//     cout<<endl;
//     for(int i=1;i<=size;i++){
//         cout<<arr[i]<<" ";
//     }

//     int size2 = 5;
//     int arr2[] = {-1, 23, 56, 90, 24,45};
//     for(int i=size/2;i>0;i--){
//         min_heapify(arr2, size2, i);
//     }

//     cout<<endl;
//     for(int i=1;i<=size;i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     int arr[row][col];
//     cout<<"Enter row: ";
//     cin>>row;
//     cout<<"Enter col: ";
//     cin>>col;
//     // ek tareeka of creating 2d array
//     // int arr2[2][4] = {2,4,5,6,7,8,9,10};

//     // dusra tareeka of creating 2d array
//     // int arr2[2][4] = {{2,4,5,6},{7,8,9,10}};

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"Enter data for ["<<i<<","<<j<<"]: ";
//             cin>>arr[i][j];
//         }
//     }
//     return 0;
// }

// creating a binary tree from inorder and preorder

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int data){
//             this->data = data;
//             this->left=NULL;
//             this->right=NULL;
//         }

// };

// Node* create_binaryTree(int inOrd[], int preOrd[], int n){
    
// }

// int main(){

//     return 0;
// }