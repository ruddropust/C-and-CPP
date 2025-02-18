#include<bits/stdc++.h>
using namespace std;
int main(){
   int m, n, sum = 0;

   cin>>m>>n;

   int i, j;
   int mat[m][n];
   cout<<"Input the matrix elements";
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++){
        cin>>mat[i][j];
      }
   }
   cout<<"Boundary Matrix";
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++){
         if (i == 0 || j == 0 || i == n-1  || j == n-1 ){

            sum = sum + mat[i][j];
         }

      }

   }
   cout<<"Sum of boundary is "<< sum;
}
