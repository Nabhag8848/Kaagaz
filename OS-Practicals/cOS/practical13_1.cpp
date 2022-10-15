#include <iostream>
using namespace std;
typedef struct
{
    int PID, process_size,
        block_number;
    bool assigned;
} Process;
typedef struct
{
    int PID, block_number, block_size,
        internal_fragmentation;
    bool allocated;
} Memory;
int main()
{
    int N_process, N_memory, external_fragmentation = 0;
    cout << "Enter Number of Process : ";
    cin >> N_process;
    cout << "Enter Number of Memory Block : ";
    cin >> N_memory;
    cout << endl;
    Process process[N_process];
    Memory memory[N_memory];
    for (int i = 0; i < N_process; i++)
    {
        process[i].PID = i + 1;
        cout << "Enter size of process P[" << process[i].PID << "] :";
        cin >> process[i].process_size;
        process[i].assigned = false;
    }
    cout << endl;
    for (int i = 0; i < N_memory;
         i++)
    {
        memory[i].block_number =
            i + 1;
        cout << "Enter size of memory block M[" << memory[i].block_number << "] :";
        cin >> memory[i].block_size;
        memory[i].allocated = false;
    }
    cout << endl;
    cout << "PID Process Size Block Number Block Size Internal Fragmentation"
         << endl;
    for (int i = 0; i < N_process; i++)
    {
        for (int j = 0; j < N_memory; j++)
        {
            if (memory[j].allocated)
                continue;
            else if (process[i].process_size <=
                     memory[j].block_size)
            {
                process[i].block_number =
                    memory[j].block_number;
                memory[j].PID =
                    process[i].PID;
                memory[j].allocated =
                    true;
                process[i].assigned = true;
                memory[j].internal_fragmentation = memory[j].block_size -
                                                   process[i].process_size;
                external_fragmentation += memory[j].internal_fragmentation;
                cout << "P[" << process[i].PID << "]\t" << process[i].process_size << "\t\t" << process[i].block_number << "\t\t" << memory[j].block_size << "\t\t" << memory[j].internal_fragmentation << endl;
                break;
            }
        }
        if (process[i].assigned ==
            false)
        {
            process[i].block_number = -1;
            cout << "P[" << process[i].PID << "]\t" << process[i].process_size << "\t\t" << -1 << "\t\t" << -1 << "\t\t" << -1 << endl;
        }
    }
    for (int j = 0; j < N_memory;
         j++)
    {
        if (memory[j].allocated)
            continue;
        memory[j].internal_fragmentation =
            memory[j].block_size;
        external_fragmentation +=
            memory[j].internal_fragmentation;
    }

    cout << "\nExternal Fragmentation : " << external_fragmentation << endl;
    return 0;
}