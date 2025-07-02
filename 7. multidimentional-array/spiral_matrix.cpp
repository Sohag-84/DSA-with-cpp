#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // print-> left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // print-> top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            // print-> right to left
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            // print-> bottom to top
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Result of spiral matrix: " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}