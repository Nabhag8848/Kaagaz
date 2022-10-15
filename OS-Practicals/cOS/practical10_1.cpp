#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter Page reference string(seperate it with comma, no extra space): ";
    cin >> s;
    int frame_size;
    cout << "Enter Frame size: ";
    cin >> frame_size;
    int page_fault = 0;
    char frame[frame_size];
    int i;
    for (i = 0; i < s.size() && i < frame_size * 2; i += 2)
    {
        frame[i] = s[i];
        page_fault++;
    }
    int replace_index = 0;
    for (; i < s.size(); i += 2)
    {
        bool found = false;
        for (int j = 0; j < frame_size; j++)
        {
            if (frame[j] == s[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            frame[replace_index] = s[i];
            replace_index = (replace_index + 1) % frame_size;
            page_fault++;
        }
    }
    cout << "Page Fault : " << page_fault << endl;
    return 0;
}