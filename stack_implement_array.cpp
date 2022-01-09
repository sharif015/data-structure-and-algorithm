#include<bits/stdc++.h>
using namespace std ;
#define MAX_SIZE 100 
int arr[MAX_SIZE];
int top=-1 ;
void push(int data)
{
    if(top>MAX_SIZE-1){
    printf("error!. stack overflow");
   return;
    }
    top++ ;
    arr[top]=data ;
}
bool isempty()
{
    if(top>=0)
    {
        return false;
    }
    return true ;
}
int pop()
{
    int data ;
    if(!isempty()){
    data=arr[top];
    top--;
    return data ;
    }
    else
    {
        printf("error!under flow.");
    }  
   
}


int size()
{
    return top ;
}
void peek()
{

  cout<< arr[top]<<endl ;
}
void print()
{
    while(!isempty())
    {
        cout<<arr[top]<<endl ;
        pop();
    }
}
void test()
{
     printf("enter data: ");
      int a ;
      scanf("%d",&a);
      push(a);
}
int main()
{
    int k=1 ;
    while(k){
        printf("choice: ");
        char choice ;
        cin>>choice ;
  switch(choice)
  {
      case 'p':
     test();
       break ;
      case 'q':
      pop();
      break ;
      case 'd':
      print();
      break ;
      case 'l':
      peek();
  }
  printf("want more? press 1 or 0 ");
  cin>>k ;

    }

}