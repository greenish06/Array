#include<iostream>
using namespace std;

 int add(int n1 , int n2){
    return n1 + n2;
 }
 int sub(int n1 , int n2){
    return n1 - n2;
 }

  int multi(int n1 , int n2){
    return n1 * n2;
 }

   float d(int n1 , int n2){
    return n1 / n2;
 }

   int mod(int n1 , int n2){
    return n1 % n2;
 }


int main(){
    int n;

       do{
            cout<< "Question Yours answer Ours  Welcome to Calculator..."<<endl;
        cout<<" press 1 for (+)"<<endl;
        cout<<" press 2 for (-)"<<endl;
        cout<<" press 3 for (*)"<<endl;
        cout<<" press 4 for (/)"<<endl;
        cout<<" press 5 for (%)"<<endl;
        cout<<" press 0 for Exit"<<endl;
        cout<<"press any one number : - ";
        cin>>n;
    
        switch (n)
        {
    
            case 1:
            int add1 ,add2 ;
              cout << "enter first value = " ;
              cin >> add1;
              cout << "enter second value = " ;
              cin >> add2;
            

              cout << add1 << " and " << add2 << " addition = " << add(add1,add2) << endl;
            break;
            case 2:
                int sub1 ,sub2 ;
              cout << "enter first value = " ;
              cin >> sub1;
              cout << "enter second value = " ;
              cin >> sub2;
              cout << sub1 << " and " << sub2 << " substraction = " << sub(sub1,sub2) << endl;
             break;
            case 3:
                 int multi1 ,multi2 ;
              cout << "enter first value = " << endl;
              cin >> multi1;
              cout << "enter second value = " << endl;
              cin >> multi2;
              cout << multi1 << " and " << multi2 << " multiplication = " << multi(multi1,multi2) << endl;
             break;
            case 4:
                int divison1 ,divison2 ;
              cout << "enter first value = " << endl;
              cin >> divison1;
              cout << "enter second value = " << endl;
              cin >> divison2;
              cout << divison1 << " and " << divison2 << " divison = " << d(divison1,divison2) << endl;
            break;
            case 5: 
                 int per1 ,per2 ;
              cout << "enter first value = " << endl;
              cin >> per1;
              cout << "enter second value = " << endl;
              cin >> per2;
              cout << per1 << " and " << per2 << " modulus = " << mod(per1,per2) << endl;
            break;
            case 0:
                cout << "Thank You for using Calculator...." << endl;
            break;
            default:
                cout << "Invalid choice!! Please enter valid choice." << endl;
             break;
        }
    }while(n>0);


    return 0;
}