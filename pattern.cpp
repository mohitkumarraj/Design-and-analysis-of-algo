#include <iostream>
using namespace std;

// //butterfly
// int main(){
//     /* code */

//     int n=6;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//           cout<<"*";
//       }

//       int space =2*n-2*i;

//       for ( int j = 0; j <=space; j++)
//       {
//           cout<<" ";
//       }

//       for(int j=1;j<=i;j++){
//           cout<<"*";
//       }
//    cout<<"\n";
//     }

// for(int i=n;i>=1;i--){
//       for(int j=1;j<=i;j++){
//           cout<<"*";
//       }

//       int space =2*n-2*i;

//       for ( int j = 0; j <=space; j++)
//       {
//           cout<<" ";
//       }

//       for(int j=1;j<=i;j++){
//           cout<<"*";
//       }
//    cout<<"\n";
//     }

//     return 0;
// }

//inverted pattern

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//            cout<<j<<" ";

//         }
//         cout<<"\n";
//     }

//     return 0;
// }

//O-1 Pattern

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//            if((i+j)%2==0){
//                cout<<"1 ";
//            }else cout<<"O ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

//rhombus

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <=n; j++)
//         {
//             cout << "*";
//         }

//         cout << "\n";
//     }

//     return 0;
// }






//number pattern

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n - i; j++)
//         {
//             cout << " ";
//         }
 
//         for (int j = 1; j <=i; j++)
//         {
//             cout << j<<" ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }





//pallindrome pattern

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n - i; j++)
//         {
//             cout <<"  ";  //double space
//         }
 
//         for(int k=i;k>1;k--){
//             cout<<k<<" ";
//         }

//         for (int j = 1; j <=i; j++)
//         {
//             cout<< j<<" ";
//         }

//         cout << "\n";
//     }
//     return 0;
// }




//pyramid can be drawn like this   // perfect
// int main(){
// int n=20;

// for (int i = 1; i <=n; i++){
  
//     for(int j=1;j<=n-i;j++)
//     cout<<"  "; //double space
    

//     for(int k=i;k>1;k--)
//       cout<<"* ";
    
//     for(int j=1;j<=i;j++)
//        cout<<"* ";

// cout<<"\n";
// }


// for (int i = n; i>=1; i--){
  
//     for(int j=1;j<=n-i;j++)
//     cout<<"  "; //double space
    

//     for(int k=i;k>1;k--)
//       cout<<"* ";
    
//     for(int j=1;j<=i;j++)
//        cout<<"* ";

// cout<<"\n";
// }
// return 0;
// }






// pyramid by different method



// int main(){

//     int n=5;

//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n-i;j++)
//           cout<<" "; // double space
//       for(int j=1;j<=2*i-1;j++)
//       cout<<"*";
 
//    cout<<"\n";
//    }




//     for(int i=n;i>=1;i--){
//        for(int j=1;j<=n-i;j++)
//           cout<<" "; // double space
//       for(int j=1;j<=2*i-1;j++)
//       cout<<"*";
 
//    cout<<"\n";
//    }


// return 0;
// }




//zig zag pattern


int main(int argc, char const *argv[])
{
    int n=9;
                                    // sum of i,j is divisible by 4
    for(int i=1;i<=3;i++){
        for(int j=1;j<=9;j++){
          if((i+j)%4==0||i==2&&j%4==0)
          cout<<"*";
          else
           cout<<" ";
        
        } 
     cout<<"\n";
    }

    return 0;
}


