#include "MathHistogramArea.h"
#include <stack>

using namespace std;

int MathHistogramArea::HistogramArea(int arr[], int arrLength)
{
    stack<int> st;
    int area = 0;
    int max = 0;
    int i = 0;

    while (i < arrLength)
    {
        if (st.empty() || arr[i] >= arr[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            int curr = st.top();
            st.pop();
            area = arr[curr] * (st.empty() ? i : (i - 1 - st.top()));
            if (area > max)
            {
                max = area;
            }
        }
    }

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        area = arr[curr] * (st.empty() ? i : (i - 1 - st.top()));
        if (area > max)
        {
            max = area;
        }
    }

    return max;
}
