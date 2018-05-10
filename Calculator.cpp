#include<iostream>

int division(int a,int b){
    return a/b;
}

void print(int n){
    std::cout<<n<<endl;
}

int main(){
    int i,j,k,n,m,a,b;
    std::cout<<"Enter:\n- 1 for sum\n- 2 for subtraction\n- 3 for multiplication \- 4 for division\n";
    std::cin>>n;
    std::cin>>a>>b;
    if(n==1){
    }
    else if(n==2){
    }
    else if(n==3){
    }
    else{
        print(division(a,b));
    }
    return 0;
}
