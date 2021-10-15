/*#include <iostream>
#include <algorithm>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n - 1 && y < n - 1 && arr[x][y] == 1)
    {
        true;
    }
    return false;
}

int ratinMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
        cout << endl;
    }

    if (ratinMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
}*/

/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   for(int i=0;i<3;i++){
       for(int j=i;j<3;j++){
           int temp = arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
       }
   }

   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2>> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
             ans[i][j]=0;
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool found = false;
    int r=0;
    int c=n-1;
    while(r<m && c>=0){
        if(mat[r][c]==target){
            found = true;
        }
        mat[r][c]>target? c-- : r++;
    }
    if(found){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}*/
/**************************************N-QUEEN PROBLEM********************************************************
#include<iostream>
#include<algorithm>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    for(int r = 0; r<x; r++){
        if(arr[r][y]==1){
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr, int x, int n){
    if(x>=n){
        return true;
    }

    for(int c=0;c<n;c++){
        if(isSafe(arr,x,c,n)){
            arr[x][c]=1;
            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][c]=0;

        } 
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int **arr= new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int [n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(nQueen(arr, 0, n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}*/
//**********************************MERGE-SORT**************************************************************
/*#include<iostream>
#include<algorithm>
using namespace std;

void Merge(int arr[], int l, int mid, int r){
    int n1= mid-l+1;
    int n2= r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }  
}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid= (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        Merge(arr, l, mid, r);
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}*/
//****************************************QUICK-SORT**********************************************************
/*#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr,i,j);
        }
    }
    swap(arr, i+1,r);
    return i+1;

}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi=partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}*/

/*#include<iostream>
using namespace std;

int getOddOccurrence(int arr, int arr_size){
    for(int i=0;i<arr_size;i++){
         int count=0;
        for(int j=0;j<arr_size;j++){
            if(arr[i] == arr[j]){
                  count++;
            }
        }
        if((count % 2) !=0){
                return arr[i];
            }
        
    }
    return -1;
}

int main(){
      int arr[]={2, 3, 5, 4, 5, 2,4, 3, 5, 2, 4, 4, 2};
      cout<<getOddOccurrence(arr, 12);
      return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}*/
//*************************Ques2-First Repeating Element***********************************
#include<iostream>
using namespace std;
int main(){
    
}