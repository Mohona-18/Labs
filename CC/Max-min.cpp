#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "\n Enter number of tasks: ";
    cin >> n;

    int iter = n;

    int A[2][n];
    for (int i = 0; i < 2; i++)
    {
        cout << "\n Enter tasks values for M" << i+1 << " : ";
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int count = 0, total_time = 0;

    while (iter--)
    {
        
        int max_of_min = INT16_MIN, r, c;
        cout << "\n Stage" << ++count << " : \n";
        for (int j = 0; j < n; j++)
        {
            // selecting task with minimum duration and keeping track of it
            if (A[0][j] < A[1][j])
            {
                if (A[0][j] != -1)
                    cout << "\n T" << j+1 << "-" << "M" << 1 << " = " << A[0][j] << endl; 

                if (max_of_min < A[0][j])
                {
                    r = 0;
                    c = j;
                    max_of_min = A[0][j];
                }
            }
            else
            {
                if (A[1][j] != -1)
                    cout << "\n T" << j+1 << "-" << "M" << 2 << " = " << A[1][j] << endl; 

                if (max_of_min < A[0][j])
                {
                    r = 1;
                    c = j;
                    max_of_min = A[1][j];
                }
            }
        }

        if (total_time < max_of_min)
        {
            total_time = max_of_min;
        }

        // maximum of minimum task is selected
        cout << "\n T" << c + 1 << " to "
             << "M" << r + 1 << " for " << max_of_min << " seconds.\n";

        // if task is executed on a particular machine removing it from array
        // making other task take more time on machines that are executing task now
        // so adding time to them
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == c)
                    A[i][j] = -1;
                if (i == r && A[i][j] != -1)
                    A[i][j] += max_of_min;
            }
        }
    }

    cout << "\n Total time for completion of all tasks = " << total_time << " seconds.";

    return 0;
}