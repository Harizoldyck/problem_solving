// Printing M using '*' pattern
// input will be odd integer
// !!!! spaces include in between stars ' '
//sample test case :
//input : 5


//*       *
//* *   * *
//*   *   *
//*       *
//*       *


#include<iostream>
using namespace std;

int main() {

    //Get the input
    int m_size;
    cout << "Enter the size of 'M'" << endl;
    cin >> m_size;

    int sp_size = (m_size*2)-3, l_size = m_size/2, odd_inc = 1, odd_dec = (m_size*2)-7;

    string line;

    //Iteration starts
    for(int i = 0;i <m_size;i++)
    {
        line = "";

        line += '*';//First '*' of Each line

        //Condition for middle part '*' in M
        if(i >= 1 && i <= l_size)
        {

            //If for two '*' stars in middle
            if(i<l_size)
            {
                for(int j = 0; j < odd_inc; j++)
                {
                    line += ' ';
                }

                line += '*';

                for(int k = 0; k < odd_dec; k++)
                {
                    line += ' ';
                }

                line += '*';
                
                for(int m = 0; m < odd_inc; m++)
                {
                    line += ' ';
                }
            }


            //Else for single '*' middle of M
            else
            {
                for(int j = 0; j < odd_inc; j++)
                {
                    line += ' ';
                }

                line += '*';

                for(int k = 0; k < odd_inc; k++)
                {
                    line += ' ';
                }
            }

            odd_dec -= 4;
            odd_inc += 2;
        }


        //Other line where it only has '*' in first and last position
        else
        {
            for(int j = 0; j < sp_size; j++)
            {
                line += ' ';
            }
        }

        line += '*';//Last '*' of each Line

        cout << line <<endl;
    }

    return 0;
}