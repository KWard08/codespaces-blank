//Karson Ward
//CSCI20

//This assignment will be an escape room. It will utilize functions and decisions as well as a math problem that you need to solve to get through the room
//It will give the user the story and ask them the answers to the math problem


#include <iostream>
using namespace std;

// This function will display the story
void story() {
    cout << "You and your team are trapped inside an ancient vault once owned by a mysterious inventor known as 'The Timekeeper.' Legend says he was obsessed with controlling time and hid the secrets to his inventions within this vault. The door is locked, and a ticking clock on the wall shows you only have 60 minutes to escape before the room is sealed forever." << endl;
    cout << "The vault is filled with strange devices, gears, and puzzles. One of these is a locked box with a riddle engraved on it. You realize that solving the math puzzle will reveal the combination to the lock." << endl;
}

// This function will display the math riddle
bool math() {
    int number1, number2, number3;
    
    cout << "Engraved on the box, you find the following message:" << endl;
    cout << "The code to unlock the box is three numbers that add up to 30. The second number is double the first, and the third number is five more than the second. What are the three numbers?" << endl;
    
    // This will get the user input for the numbers
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
    
    // This equation checks if the numbers that the user input are correct
    if ((number1 + number2 + number3 == 30) && (number2 == 2 * number1) && (number3 == number2 + 5)) {
        return true;
    } else {
        return false;
    }
}

// This function will display the success story if the users answers are successful
void success() {
    cout << "After solving the riddle on the locked box, you quickly calculate the three numbers." << endl;
    cout << "You enter the combination into the lock: 5, 10, and 15." << endl;
    cout << "With a satisfying click, the box springs open, revealing an ornate golden key inside. You race to the large vault door, insert the key, and twist. For a moment, nothing happens, and your heart skips a beat. But then, with a deep groan, the door slowly swings open, revealing the bright light of the outside world." << endl;
    cout << "You and your team step out just as the ticking clock behind you strikes the final minute." << endl;
    cout << "You did it—you've escaped the Timekeeper's Vault! Time is on your side... for now." << endl;
}

// This function will display the failure story if the users answers are wrong
void failure() {
    cout << "As the minutes tick away, panic begins to set in. You and your team work frantically to solve the riddle on the locked box, but despite your best efforts, the math eludes you. The pressure builds as the clock ticks down to its final moments." << endl;
    cout << "You try various combinations, but none of them seem to work. With only a few minutes left, you frantically enter a guess. The lock remains stubbornly closed." << endl;
    cout << "Suddenly, the lights flicker, and a low, ominous hum fills the air. You hear a voice echo through the vault, the Timekeeper’s disembodied voice saying, 'You have failed to solve the riddle. Time shall now be your prison.'" << endl;
}

int main() {
    // This displays the story
    story();
    
    // This chooses what to display if the math is right or wrong
    if (math()) {
        // If the answer is correct, it will display the success message
        success();
    } else {
        // If the answer is incorrect, it will display the failure message
        failure();
    }
    
    return 0;
}