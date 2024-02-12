#include <stdio.h>

// Define candidate names as macros
#define CANDIDATE1 "Amit Shah"
#define CANDIDATE2 "Narendra Modi"
#define CANDIDATE3 "Vijay Rupani"
#define CANDIDATE4 "Donald Trump"

// Define an array to store vote counts for each candidate
int Votingcount[6] = {0}; // Initialized to zero, index 0 is not used

// Define macros for accessing vote counts for each candidate
#define Votes1 Votingcount[1]
#define Votes2 Votingcount[2]
#define Votes3 Votingcount[3]
#define Votes4 Votingcount[4]

// Function prototypes
void TakeVote();
void votesCount();
void FindWinnerCandidate();

int main() {
    int choice;

    // Main menu loop
    do {
        printf("\n\n ###### Welcome to Election/Voting 2023 #####");
        printf("\n\n 1. Take the Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find Winner Candidate");
        printf("\n 0. Exit");

        printf("\n\n Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                // Exit the program
                printf("\nExiting from the system\n");
                break;
            case 1:
                // Take vote
                TakeVote();
                break;
            case 2:
                // Display vote count
                votesCount();
                break;
            case 3:
                // Find and display the winner candidate
                FindWinnerCandidate();
                break;
            default:
                // Invalid choice
                printf("\n Error: Invalid Choice");
        }
    } while (choice != 0);

    return 0;
}

// Function to take vote
void TakeVote() {
    int choice;
    printf("\n\n ***** Please choose your Candidate For Voting *****\n\n");
    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);
    printf("\n 5. %s", "None of These");
    printf("\n\n Enter your choice (1 - 5) : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Increment vote count for candidate 1
            Votingcount[1]++;
            break;
        case 2:
            // Increment vote count for candidate 2
            Votingcount[2]++;
            break;
        case 3:
            // Increment vote count for candidate 3
            Votingcount[3]++;
            break;
        case 4:
            // Increment vote count for candidate 4
            Votingcount[4]++;
            break;
        case 5:
            // Increment spoiled votes count
            Votingcount[5]++;
            break;
        default:
            // Invalid choice
            printf("\n Error: Wrong Choice !! Please retry \n");
    }
    printf("\n Thanks for voting !! \n");
}

// Function to display vote count
void votesCount() {
    printf("\n\n ***** Voting Result *****");
    printf("\n %s - %d ", CANDIDATE1, Votes1);
    printf("\n %s - %d ", CANDIDATE2, Votes2);
    printf("\n %s - %d ", CANDIDATE3, Votes3);
    printf("\n %s - %d ", CANDIDATE4, Votes4);
    printf("\n %s - %d ", "Spoiled Votes", Votingcount[5]);
}

// Function to find and display the winner candidate
void FindWinnerCandidate() {
    printf("\n\n  ***** Leading Candidate *****\n\n");
    int maxVotes = 0;
    int winnerIndex = 0;

    // Find the candidate with the maximum votes
    for (int i = 1; i <= 4; i++) {
        if (Votingcount[i] > maxVotes) {
            maxVotes = Votingcount[i];
            winnerIndex = i;
        }
    }

    // Check if there is a winner
    if (maxVotes > 0) {
        // Display the winner candidate
        switch (winnerIndex) {
            case 1:
                printf("[%s]", CANDIDATE1);
                break;
            case 2:
                printf("[%s]", CANDIDATE2);
                break;
            case 3:
                printf("[%s]", CANDIDATE3);
                break;
            case 4:
                printf("[%s]", CANDIDATE4);
                break;
            default:
                break;
        }
    } else {
        // No winner
        printf("\n ------!! NO WINNER !!------ \n");
    }
}
