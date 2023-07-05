#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> array;
    array.push_back(4);
    array.push_back(8);
    array.push_back(12);

    array.insert(array.begin()+1,66);

    
    
    int n=array.size();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",array[i]);
    }

    for(int item:array){
        printf("%d ",item);
    }
    array.clear();
    return 0;
}