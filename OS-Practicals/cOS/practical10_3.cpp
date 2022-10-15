#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    string s;
    cout << "Enter Page reference string (seperate it with comma, no extra space) : ";
    cin >> s;
    int frame_size;
    cout << "Enter Frame size : ";
    cin >> frame_size;
    int page_fault = 0;
    struct Frame
    {
        char page_no;
        int freq;
    };
    struct Frame frame[frame_size];
    int i;
    int index = 0;
    for (i = 0; i < frame_size * 2 && i < s.size(); i += 2)
    {
        frame[index].page_no = s[i];
        frame[index++].freq = frame_size - i;
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
                break;
            }
        }
        if (!found)
        {
            page_fault++;
            struct Replacement
            {
                struct Frame fr;
                int index;
            };
            vector<struct Replacement> not_needed;
            for (int j = 0; j < frame_size; j++)
            {
                bool needed = false;
                for (int k = i + 2; k < s.size(); k += 2)
                {
                    if (s[k] == frame[j].page_no)
                    {

                        needed = true;
                        break;
                    }
                }
                if (!needed)
                {
                    struct Replacement r;
                    r.fr = frame[j];
                    r.index = j;
                    not_needed.push_back(r);
                }
            }
            int max = INT_MIN;
            int replace_index;
            for (auto it : not_needed)
            {
                if (it.fr.freq > max)
                {
                    max = it.fr.freq;
                    replace_index = it.index;
                }
            }
            frame[replace_index].page_no = s[i];
            frame[replace_index].freq = 1;
        }
    }
    cout << "Page Fault: " << page_fault << endl;
    return 0;
}