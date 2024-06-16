# Voting-System

This is a simple console-based voting system built using C. It allows users to cast votes for predefined candidates, view the vote counts, and find the winner candidate.

## Features

- Cast a vote for one of the predefined candidates.
- View the vote count for each candidate.
- Determine the winner based on the highest vote count.

## Candidates

- Amit Shah
- Narendra Modi
- Vijay Rupani
- Donald Trump

## Getting Started

### Prerequisites

- A C compiler (e.g., GCC)

### Installation and Running

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/MayankSavaliya/Voting-System.git
    cd Voting-System
    ```

2. **Compile the Program:**

    ```bash
    gcc voting_system.c -o voting_system
    ```

3. **Run the Program:**

    ```bash
    ./voting_system
    ```

### Usage

1. **Main Menu:**

    The program will display a main menu with the following options:

    ```plaintext
    ###### Welcome to Election/Voting 2023 #####
    
    1. Take the Vote
    2. Find Vote Count
    3. Find Winner Candidate
    0. Exit
    
    Please enter your choice:
    ```

2. **Take the Vote:**

    When you choose this option, you will be prompted to select a candidate to vote for:

    ```plaintext
    ***** Please choose your Candidate For Voting *****
    
    1. Amit Shah
    2. Narendra Modi
    3. Vijay Rupani
    4. Donald Trump
    5. None of These
    
    Enter your choice (1 - 5):
    ```

    Enter the number corresponding to your choice and press Enter.

3. **Find Vote Count:**

    This option displays the current vote count for each candidate, as well as the number of spoiled votes:

    ```plaintext
    ***** Voting Result *****
    Amit Shah - X
    Narendra Modi - Y
    Vijay Rupani - Z
    Donald Trump - W
    Spoiled Votes - V
    ```

4. **Find Winner Candidate:**

    This option displays the candidate with the highest votes:

    ```plaintext
    ***** Leading Candidate *****
    [Candidate Name]
    ```

    If no votes have been cast, it will display:

    ```plaintext
    ------!! NO WINNER !!------
    ```

5. **Exit:**

    This option exits the program.
