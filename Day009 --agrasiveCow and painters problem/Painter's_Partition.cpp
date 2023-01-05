

bool isPassible(vector<int> &boards, int n, int k, int mid)
{
    int boardCount = 1;
    int paintSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (paintSum + boards[i] <= mid)
        {
            paintSum += boards[i];
        }
        else
        {
            boardCount++;
            if (boardCount > k || boards[i] > mid)
            {
                return false;
            }
            paintSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int n = boards.size();
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPassible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}