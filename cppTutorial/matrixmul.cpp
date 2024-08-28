#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i, j, k, fr=0, fc=0, sr=0,sc=0, ftot_size=1, stot_size=1, res_size=1;
    vector<vector<int> > f_matrix;
	vector<vector<int> > s_matrix;
    vector<vector<int> > res_matrix;
    
    cout << "Enter first matrix dimension" << endl;
    cin >> fr >> fc;
    ftot_size=fr*fc;
    cout << "Size is" << ftot_size << endl;
    f_matrix.resize(ftot_size);

    cout << "Enter first Matrix" << endl;

    for(i = 0; i<fr; i++)
    {
        for(j = 0; j<fc; j++)
        {
            int tempVal = 0;
            cout<<"Enter the numbers for Matrix 1" << endl;
            cin>>tempVal;
            f_matrix[i].push_back(tempVal); ;
        }
    }

    cout << "::First Matrix::" << endl;
    for(i = 0; i < fr; i++)
    {
        for(j = 0; j < fc; j++)
        {
            cout << f_matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter second matrix dimension" << endl;
    cin >> sr >> sc;
    stot_size=sr*sc;

    cout << "Size is" << stot_size << endl;
    s_matrix.resize(stot_size);

    cout << "Enter First Matrix" << endl;

    for(i = 0; i<sr; i++)
    {
        for(j = 0; j<sc; j++)
        {
            int tempVal = 0;
            cout<<"Enter the number for Matrix 1" << endl;
            cin>>tempVal;
            s_matrix[i].push_back(tempVal);
        }
    }

    cout << "::Second Matrix::" << endl;
    for(i = 0; i < sr; i++)
    {
        for(j = 0; j < sc; j++)
        {
            cout << s_matrix[i][j] << " ";
        }
        cout << endl;
    }

    res_size=fr*sc;
    cout << "Result Matrix size is" << res_size << endl;
    res_matrix.resize(res_size);

    for(i=0; i< fr; i++)
        for(j=0; j<sc; j++)
        {
            int tempVal=0;
            for(k=0; k< sr; k++)
                 tempVal+=f_matrix[i][k]*s_matrix[k][j];
                 res_matrix[i].push_back(tempVal);
        }

    cout << "::Result Matrix::" << endl;
    for(i = 0; i < fr; i++)
    {
        for(j = 0; j < sc; j++)
        {
            cout << res_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}