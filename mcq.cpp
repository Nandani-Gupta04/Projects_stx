#include <iostream>
#include <string>
using namespace std;

class Quiz_os {
private:
    string questions[25] = {
        "What is an Operating system?",
        "In Operating Systems, which of the following is/are CPU scheduling algorithms?",
        "CPU scheduling is the basis of___",
        "Where is the operating system placed in the memory?",
        "Which of the following is not a real time operating system?",
        "What was the first operating system?",
        "What is the most used computer operating system?",
        "When was the first operating system built?",
        "What is the first windows version?",
        "What does an operating system do?",
        "What is the full form of BIOS?",
        "What does FAT mean?",
        "Who needs a BIOS to function properly?",
        "What does restarting an operating system do?",
        "What operations mentioned are done by an operating system?",
        "What is a batch OS?",
        "What is a time Sharing OS?",
        "Which of the following is not directly related to the operating system?",
        "What makes an operating system whole?",
        "What is FIFO scheduling?",
        "The FCFS algorithm is particularly troublesome for____",
        "Swapping ___ be done when a process has pending I/O",
        "The information about all files is kept in_____",
        "Network OS runs on______",
        "To recover from failures in the network operations ____ information may be maintained"
    };

    string options[25][4] = {
        {"interface between hardware and application program","collection of programs that manage hardware resources","system service provider to the application programs","All of the above"},
        {"Priority","Round robin","SJF","all of these"},
        {"multiprogramming OS","large memory sized system","multiprocessor system","none"},
        {"either low or high memory","in low memory","in high memory","none"},
        {"RTLinux","Palm OS","QNX","VxWorks"},
        {"Linux","Windows","GM NAA I/O","Android"},
        {"Linux","Windows","Chrome OS","Android"},
        {"1956","1950","1952","1960"},
        {"Windows NT","Windows 3.0","Windows 1.01","Windows XP"},
        {"An interface that regulates hardware and software programs","A hardware device","none","all of the above"},
        {"Between input-output system","Binary input-output system","Basic I/O system","all of these"},
        {"File format attribute","Font allocation tree","File allocation table","none"},
        {"A mobile device","An OS","hardware device","all of these"},
        {"Restarts all the processes","Shut down the OS completely","Terminates all running programs","all of the above"},
        {"Maintaining recycle bin","Transfer file","opens a program","all of these"},
        {"Multiple individual tasks","Similar types of tasks are grouped together","Tasks operating at different systems","all of the above"},
        {"Makes use of log files","One shell seems to be shared","Allows users to use one system with two different terminals","All of the above"},
        {"BIOS","software programs","hardware devices","All of the above"},
        {"Log files","input devices","output devices","All of the above"},
        {"First input-output scheduling","First in first out scheduling","Free input free output","all of these"},
        {"OS","multiprocessor systems","time sharing systems","multiprogramming systems"},
        {"must never","maybe","can","must"},
        {"OS","seperate directory structure","swap space","none"},
        {"every system in network","server","both server and every system in network","none"},
        {"OS","ip address","stateless","state"}
    };

    int answers[25] = {3,3,0,0,1,2,1,0,2,0,2,2,1,0,3,1,2,2,3,1,2,0,1,1,3};
    int score;

public:
    Quiz_os() {
        score = 0;
    }
    void heading(){
        cout<<"**************************************************\n";
        cout<<" ✨ R.k. Desai Achchhariwala College of Computer ✨\n";
        cout<<"                & Applied Sciences                \n";
        cout<<"**************************************************\n";
        cout<<"==================================================\n";
        cout<<"          ✔OPERATING SYSTEM QUIZ GAME✔       \n";
        cout<<"==================================================\n";
        cout<<"Instructions:                                     \n";
        cout<<"⚫ Each question has 4 options (0-3)              \n";
        cout<<"⚫ Enter the correct option                       \n";
        cout<<"==================================================\n\n";
}

    void play() {
        heading();
    

        for (int i = 0; i < 25; i++) {
        cout<<"==================================================\n";
            cout << "\nQ" << i + 1 << ": " << questions[i] << endl;
        cout<<"==================================================\n";
            for (int j = 0; j < 4; j++) {
                cout << j << ". " << options[i][j] << endl;
            }

            int ans;
            cout << "Enter your answer (0-3): ";
            cin >> ans;

            if (ans == answers[i]) {
                cout << "✔ Correct!" << endl;
                score++;
            } else {
                cout << "❌ Incorrect! The correct answer is "
                     << options[i][answers[i]] << endl;
            }
        }

        cout << "\nYour final score is " << score << "/25" << endl;

        if (score >= 20)
            cout << "Excellent performance!" << endl;
        else if (score >= 15)
            cout << "Good job!" << endl;
        else
            cout << "Keep practicing!!!" << endl;
    }
};

int main() {
    Quiz_os game;
    game.play();
    return 0;
}
