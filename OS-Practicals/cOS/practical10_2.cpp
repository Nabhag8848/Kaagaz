#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter Page reference string(seperate it with comma, no extra space) : ";
    cin >> s;
    int frame_size;
    cout << "Enter Frame size : ";
    cin >> frame_size;
    int page_fault = 0;
    struct Frame
    {
        char page_no;
        int source_index;
    };
    struct Frame frame[frame_size];
    int i = 0, j = 0;
    for (i = 0; i < s.size() && i < frame_size * 2; i += 2)
    {
        frame[j].page_no = s[i];
        frame[j].source_index = i;
        j++;
        page_fault++;
    }
    for (; i < s.size(); i += 2)
    {
        bool found = false;
        for (int j = 0; j < frame_size; j++)
        {
            if (s[i] == frame[j].page_no)
            {

                found = true;
                frame[j].source_index = i;
                break;
            }
        }
        if (!found)
        {
            page_fault++;
            int min_index = i - 2;
            int replace_index;
            for (int j = 0; j < frame_size; j++)
            {
                if (frame[j].source_index < min_index)
                {
                    min_index = frame[j].source_index;
                    replace_index = j;
                }
            }
            frame[replace_index].page_no = s[i];
            frame[replace_index].source_index = i;
        }
    }
    cout << "Page Fault : " << page_fault << endl;
    return 0;
}