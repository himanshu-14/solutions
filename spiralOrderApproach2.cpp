#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> &v);
void moveInDirection(int direction,int &numrows,int &numcols,int &row,int &col,vector<int> &spiral,const vector<vector<int> > &A)
{
    if(direction%4==0)
    {
        for(int i=0;i<numcols;i++)
        {spiral.push_back(A[row][++col]);}
        numrows--;
    }//move right
    else if(direction%4==1)
    {
        for(int i=0;i<numrows;i++)
        {spiral.push_back(A[++row][col]);}
        numcols--;
    }//move down
    else if(direction%4==2)
    {
        for(int i=0;i<numcols;i++)
        {spiral.push_back(A[row][--col]);}
        numrows--;
    }//move left
    else if(direction%4==3)
    {
        for(int i=0;i<numrows;i++)
        {spiral.push_back(A[--row][col]);}
        numcols--;
    }//move right
}
vector<int> spiralOrder(const vector<vector<int> > &A) {

    int row=0,col=-1;
    int numrows=A.size();
    int numcols=A[0].size();
    int k=0;
    vector<int> spiral;
    while(numrows>0 &&numcols>0)
    {
        moveInDirection(k++,numrows,numcols,row,col,spiral,A);
    }
    printVector(spiral);
}
void printVector(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
int main()
{

    int rows;
    int cols;
    cin>>rows>>cols;
    vector<vector<int> > A(rows,vector<int> (cols,0));
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cin>>A[i][j];
    }
    spiralOrder(A);
    return 0;
}
