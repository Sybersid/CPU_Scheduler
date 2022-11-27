#ifndef SCHEDULER
#define SCHEDULER

void task_loader(char* file_name, std::array<task,MAX_TASK_NUM> &task_array, u_int &count);

void fcfs_policy(std::vector<task> &task_list, u_int &count, std::vector<task> &finish_array);

// void srtf_policy(task task_array[], u_int count, task finish_array[]);

// void rr_policy(task task_array[], u_int count, u_int time_quantum, task finish_array[]);

#endif 