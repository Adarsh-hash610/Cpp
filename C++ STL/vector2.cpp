#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    vector<int>::iterator it=v.begin();
    it++;
    cout<< *(it)<<" "<<endl;;
    it=it+2;
    cout << *(it)<<" "<<endl;;
    for(auto it:v)
    {
        cout<< it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1,v.begin()+3);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //Insert Function....
    vector<int>vec(2,100);  //  {100,100}
    vec.insert(vec.begin(),300);    //  {300,100,100}
    vec.insert(vec.begin()+1,2,10); //  {300,10,10,100,100}

    vector<int>cpy(2,50);   //  {50,50}
    vec.insert(vec.begin(),cpy.begin(),cpy.end());  //  {50,50,300,10,10,100,100}
    for(auto it:vec)
    {
        cout << it<<" ";
    }
    cout<<endl;
    //{10,20}
    cout<< v.size();    //  return the size of the vector...

    //  {10,20}
    v.pop_back();   //  {10}
    
    vector<int>v1(2);
    //  v1-->{10,20}
    vector<int>v2(2);
    //  v2 --> {30,40}
    v1.swap(v2);    //  v1-->{30,40}    v2-->{10,20}

    v1.clear();     //Erases the entire vector...
}