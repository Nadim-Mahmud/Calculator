#include<iostream>

int add(int a, int b){
    return a+b;
}
int multiplies(int a, int b){
    return a*b;
}
int substract(int a,int b)
{
    return a-b;
}
int division(int a,int b){
    return a/b;
}
void print(int n){
    std::cout<<n<<"\n";
}
int main(){
    int i,j,k,n,m,a,b;
    std::cout<<"Enter:\n- 1 for sum\n- 2 for subtraction\n- 3 for multiplication \n- 4 for division\n";
    std::cin>>n;
    std::cin>>a>>b;
    if(n==1){
        print(add(a,b));
    }
    else if(n==2){
        print(substract(a,b));
    }
    else if(n==3){
        print(multiplies(a,b));
    }
    else{
        print(division(a,b));
    }
    return 0;
}
