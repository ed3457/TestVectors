// TestVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    vector<int> vec1;

    

    for (int i = 1; i <= 5; i++)
    {
        vec1.push_back(i);
    }

    //for (int i = 0; i <vec1.size(); i++)
    //{
    //    //cout<<vec1[i]<<endl;
    //    cout << vec1.at(i) << endl;
    //}

   // cout << vec1.size() << endl;

    vector<char> vec2(10, 'A');


    for (int i = 0; i < vec2.size(); i++)
        {
            cout<<vec2[i]<<endl;
        
        }

}
