
#include <iostream>
#include <string>
#include <vector>
#include<random>
#include<ctime>
#include <cstdlib>
using namespace std;


struct Flags {
	string country;
	vector<string>hints;
    string continent;
};





vector<Flags> Mix= {
    {"Turkey", {"Red background", "White crescent", "One star"}},
    {"Japan", {"White background", "One red circle", "Asian country"}},
    {"Germany", {"Three horizontal stripes", "Black-Red-Yellow", "European country"}},
    {"France", {"Three vertical stripes", "Blue-White-Red", "European country"}},
    {"Italy", {"Green-White-Red", "Three vertical stripes", "Famous for pizza"}},
    {"Spain", {"Red-Yellow-Red", "Crest on yellow stripe", "Speaks Spanish"}},
    {"United Kingdom", {"Union Jack", "Red, white and blue", "Island nation"}},
    {"United States", {"Stars and stripes", "Red-White-Blue", "50 stars"}},
    {"Canada", {"Red-White-Red", "Maple leaf", "North American country"}},
    {"Brazil", {"Green with yellow diamond", "Blue globe", "South American country"}},
    {"Russia", {"White-Blue-Red", "Three horizontal stripes", "World’s largest country"}},
    {"China", {"Red background", "One big star and four small", "Asian superpower"}},
    {"India", {"Orange-White-Green", "Ashoka Chakra", "South Asian country"}},
    {"Australia", {"Union Jack in corner", "Stars on blue", "Island continent"}},
    {"New Zealand", {"Southern Cross stars", "Blue background", "Similar to Australian flag"}},
    {"Mexico", {"Green-White-Red", "Eagle with a snake", "Latin America"}},
    {"Argentina", {"Light Blue-White-Light Blue", "Sun in the center", "Messi’s homeland"}},
    {"South Korea", {"White background", "Red-blue circle", "Black trigrams"}},
    {"North Korea", {"Red with star", "Blue-white borders", "Dictatorship"}},
    {"Saudi Arabia", {"Green background", "Arabic text", "Sword emblem"}},
    {"Iran", {"Green-White-Red", "Symbol in center", "Middle Eastern country"}},
    {"Iraq", {"Red-White-Black", "Arabic script", "Conflict history"}},
    {"Greece", {"Blue and white stripes", "White cross", "Mediterranean country"}},
    {"Portugal", {"Green and red", "Coat of arms", "Iberian Peninsula"}},
    {"Netherlands", {"Red-White-Blue", "Horizontal stripes", "Low country"}},
    {"Belgium", {"Black-Yellow-Red", "Vertical stripes", "Famous for chocolate"}},
    {"Sweden", {"Blue with yellow cross", "Nordic country", "Cold winters"}},
    {"Norway", {"Red with blue cross", "White outline", "Fjords"}},
    {"Denmark", {"Red with white cross", "Oldest flag", "Nordic country"}},
    {"Finland", {"White with blue cross", "Nordic country", "Thousand lakes"}},
    {"Poland", {"White and red", "Horizontal stripes", "Eastern Europe"}},
    {"Czech Republic", {"White-Red-Blue triangle", "Eastern Europe", "Used to be Czechoslovakia"}},
    {"Ukraine", {"Blue over yellow", "Slavic country", "War with Russia"}},
    {"Switzerland", {"Red with white cross", "Square shape", "Neutral country"}},
    {"Austria", {"Red-White-Red", "Horizontal stripes", "Central Europe"}},
    {"South Africa", {"Rainbow colors", "Green-Yellow-Black", "Post-apartheid symbol"}},
    {"Egypt", {"Red-White-Black", "Eagle emblem", "Pyramids"}},
    {"Morocco", {"Red with green star", "North Africa", "Arabic speaking"}},
    {"Algeria", {"White and green", "Red crescent and star", "North Africa"}},
    {"Indonesia", {"Red over white", "Very similar to Poland", "Southeast Asia"}},
    {"Singapore", {"Red with white crescent", "Five stars", "City-state"}}
};


vector<Flags> Europe = {
    {"Germany", {"Three horizontal stripes", "Black-Red-Yellow", "European country"}, "Europe"},
    {"France", {"Three vertical stripes", "Blue-White-Red", "European country"}, "Europe"},
    {"Italy", {"Green-White-Red", "Three vertical stripes", "Famous for pizza"}, "Europe"},
    {"Spain", {"Red-Yellow-Red", "Crest on yellow stripe", "Speaks Spanish"}, "Europe"},
    {"United Kingdom", {"Union Jack", "Red, white and blue", "Island nation"}, "Europe"},
    {"Russia", {"White-Blue-Red", "Three horizontal stripes", "World’s largest country"}, "Europe"},
    {"Greece", {"Blue and white stripes", "White cross", "Mediterranean country"}, "Europe"},
    {"Portugal", {"Green and red", "Coat of arms", "Iberian Peninsula"}, "Europe"},
    {"Netherlands", {"Red-White-Blue", "Horizontal stripes", "Low country"}, "Europe"},
    {"Belgium", {"Black-Yellow-Red", "Vertical stripes", "Famous for chocolate"}, "Europe"},
    {"Sweden", {"Blue with yellow cross", "Nordic country", "Cold winters"}, "Europe"},
    {"Norway", {"Red with blue cross", "White outline", "Fjords"}, "Europe"},
    {"Denmark", {"Red with white cross", "Oldest flag", "Nordic country"}, "Europe"},
    {"Finland", {"White with blue cross", "Nordic country", "Thousand lakes"}, "Europe"},
    {"Poland", {"White and red", "Horizontal stripes", "Eastern Europe"}, "Europe"},
    {"Czech Republic", {"White-Red-Blue triangle", "Eastern Europe", "Used to be Czechoslovakia"}, "Europe"},
    {"Ukraine", {"Blue over yellow", "Slavic country", "War with Russia"}, "Europe"},
    {"Switzerland", {"Red with white cross", "Square shape", "Neutral country"}, "Europe"},
    {"Austria", {"Red-White-Red", "Horizontal stripes", "Central Europe"}, "Europe"},
    {"Ireland", {"Green-White-Orange", "Vertical stripes", "Emerald Isle"}, "Europe"},
    {"Hungary", {"Red-White-Green", "Horizontal stripes", "Central Europe"}, "Europe"},
    {"Croatia", {"Red-White-Blue", "Coat of arms in center", "Balkan country"}, "Europe"},
    {"Slovakia", {"White-Blue-Red", "Shield with cross", "Central Europe"}, "Europe"},
    {"Slovenia", {"White-Blue-Red", "Coat of arms", "Small European country"}, "Europe"},
    {"Bulgaria", {"White-Green-Red", "Horizontal stripes", "Balkan country"}, "Europe"},
    {"Romania", {"Blue-Yellow-Red", "Vertical stripes", "Eastern Europe"}, "Europe"},
    {"Serbia", {"Red-Blue-White", "Coat of arms", "Balkan country"}, "Europe"},
    {"Montenegro", {"Red with gold border", "Coat of arms", "Balkan country"}, "Europe"},
    {"Macedonia", {"Red with yellow sun", "Balkan country", "Flag renewed in 2019"}, "Europe"},
    {"Estonia", {"Blue-Black-White", "Northern Europe", "Baltic state"}, "Europe"},
    {"Latvia", {"Dark red-white-red", "Baltic state", "Northern Europe"}, "Europe"},
    {"Lithuania", {"Yellow-Green-Red", "Baltic state", "Northern Europe"}, "Europe"},
    {"Iceland", {"Blue with red cross", "White border", "Nordic country"}, "Europe"},
    {"Luxembourg", {"Red-White-Blue", "Horizontal stripes", "Small country"}, "Europe"},
    {"Malta", {"White and red", "George Cross", "Small island nation"}, "Europe"},
    {"Cyprus", {"White background", "Map in center", "Mediterranean island"}, "Europe"},
    {"Belarus", {"Red and green", "Decorative pattern", "Eastern Europe"}, "Europe"},
    {"Andorra", {"Blue-Yellow-Red", "Coat of arms", "Pyrenees country"}, "Europe"},
    {"Monaco", {"Red and white", "Small principality", "Near France"}, "Europe"},
    {"San Marino", {"White and blue", "Coat of arms", "Small republic"}, "Europe"},
    {"Liechtenstein", {"Blue and red", "Crown in corner", "Small principality"}, "Europe"},
    {"Vatican City", {"Yellow and white", "Papal keys", "Smallest country"}, "Europe"},
    {"Kosovo", {"Blue background", "Yellow map", "Disputed country"}, "Europe"},
    {"Gibraltar", {"Red and white", "Castle emblem", "British Overseas Territory"}, "Europe"},
    {"Faroe Islands", {"White with red cross", "Blue border", "Autonomous territory"}, "Europe"},
    {"Greenland", {"White and red", "Circle design", "Autonomous territory"}, "Europe"},
    {"Channel Islands", {"Various flags", "British Crown dependencies", "European region"}, "Europe"},
    {"Svalbard", {"Norwegian sovereignty", "Arctic territory", "No official flag"}, "Europe"},
};

vector<Flags> Asia = {
    {"Turkey", {"Red background", "White crescent", "One star"}, "Asia"},
    {"Japan", {"White background", "One red circle", "Asian country"}, "Asia"},
    {"China", {"Red background", "One big star and four small", "Asian superpower"}, "Asia"},
    {"India", {"Orange-White-Green", "Ashoka Chakra", "South Asian country"}, "Asia"},
    {"South Korea", {"White background", "Red-blue circle", "Black trigrams"}, "Asia"},
    {"North Korea", {"Red with star", "Blue-white borders", "Dictatorship"}, "Asia"},
    {"Saudi Arabia", {"Green background", "Arabic text", "Sword emblem"}, "Asia"},
    {"Iran", {"Green-White-Red", "Symbol in center", "Middle Eastern country"}, "Asia"},
    {"Iraq", {"Red-White-Black", "Arabic script", "Conflict history"}, "Asia"},
    {"Indonesia", {"Red over white", "Very similar to Poland", "Southeast Asia"}, "Asia"},
    {"Singapore", {"Red with white crescent", "Five stars", "City-state"}, "Asia"},
    {"Malaysia", {"Red-White stripes", "Blue canton", "Southeast Asia"}, "Asia"},
    {"Thailand", {"Red-White-Blue-White-Red", "Horizontal stripes", "Southeast Asia"}, "Asia"},
    {"Vietnam", {"Red with yellow star", "Communist country", "Southeast Asia"}, "Asia"},
    {"Philippines", {"Blue-Red-White", "Sun and stars", "Southeast Asia"}, "Asia"},
    {"Bangladesh", {"Green with red circle", "South Asia", "Developing country"}, "Asia"},
    {"Pakistan", {"Green and white", "Crescent and star", "South Asia"}, "Asia"},
    {"Nepal", {"Two triangles", "Unique shape", "South Asia"}, "Asia"},
    {"Bhutan", {"Dragon and orange background", "South Asia", "Himalayan country"}, "Asia"},
    {"Mongolia", {"Red and blue vertical stripes", "Soyombo symbol", "East Asia"}, "Asia"},
    {"Cambodia", {"Blue and red", "Angkor Wat", "Southeast Asia"}, "Asia"},
    {"Laos", {"Red, blue and white", "Southeast Asia", "Landlocked country"}, "Asia"},
    {"Myanmar", {"Yellow, green, red stripes", "Star in center", "Southeast Asia"}, "Asia"},
    {"Taiwan", {"Blue canton with white sun", "Red background", "Self-governed"}, "Asia"},
    {"Armenia", {"Red-Blue-Orange", "Caucasus region", "Asia"}, "Asia"},
    {"Azerbaijan", {"Blue, red and green", "Crescent and star", "Caucasus region"}, "Asia"},
    {"Georgia", {"White with five crosses", "Caucasus region", "Asia"}, "Asia"},
    {"Israel", {"Blue Star of David", "White background", "Middle East"}, "Asia"},
    {"Jordan", {"Black-White-Green-Red", "Star in triangle", "Middle East"}, "Asia"},
    {"Lebanon", {"Red-White-Red", "Cedar tree", "Middle East"}, "Asia"},
    {"Syria", {"Red-White-Black", "Stars in flag", "Middle East"}, "Asia"},
    {"Yemen", {"Red-White-Black", "Middle East", "Conflict zone"}, "Asia"},
    {"Oman", {"White-Red-Green", "Khanjar emblem", "Middle East"}, "Asia"},
    {"United Arab Emirates", {"Red-Green-White-Black", "Middle East", "Federation"}, "Asia"},
    {"Qatar", {"Maroon and white", "Zigzag edge", "Middle East"}, "Asia"},
    {"Kuwait", {"Green-White-Red-Black", "Middle East", "Small country"}, "Asia"},
    {"Bahrain", {"Red and white", "Zigzag edge", "Middle East"}, "Asia"},
    {"Brunei", {"Yellow, black and white", "Southeast Asia", "Small sultanate"}, "Asia"},
    {"Timor-Leste", {"Black, yellow, red and white", "Southeast Asia", "New country"}, "Asia"},
    {"Maldives", {"Green with red border", "Crescent moon", "Island nation"}, "Asia"},
    {"Sri Lanka", {"Orange and green stripes", "Lion with sword", "Island nation"}, "Asia"},
    {"Kazakhstan", {"Sky blue with gold eagle", "Central Asia", "Large country"}, "Asia"},
    {"Uzbekistan", {"Blue, white and green stripes", "Stars and crescent", "Central Asia"}, "Asia"},
    {"Turkmenistan", {"Green with carpet pattern", "Central Asia", "Desert country"}, "Asia"},
    {"Tajikistan", {"Red, white and green", "Central Asia", "Mountainous country"}, "Asia"},
    {"Kyrgyzstan", {"Red with yellow sun", "Central Asia", "Mountainous country"}, "Asia"},
};

vector<Flags> America = {
    {"United States", {"Stars and stripes", "Red-White-Blue", "50 stars"}, "America"},
    {"Canada", {"Red-White-Red", "Maple leaf", "North American country"}, "America"},
    {"Mexico", {"Green-White-Red", "Eagle with a snake", "Latin America"}, "America"},
    {"Brazil", {"Green with yellow diamond", "Blue globe", "South American country"}, "America"},
    {"Argentina", {"Light Blue-White-Light Blue", "Sun in the center", "Messi’s homeland"}, "America"},
    {"Colombia", {"Yellow-Blue-Red", "Horizontal stripes", "South America"}, "America"},
    {"Chile", {"White star on blue", "Red and white stripes", "South America"}, "America"},
    {"Peru", {"Red-White-Red", "Coat of arms", "South America"}, "America"},
    {"Venezuela", {"Yellow-Blue-Red", "Stars in arc", "South America"}, "America"},
    {"Ecuador", {"Yellow-Blue-Red", "Coat of arms", "South America"}, "America"},
    {"Guatemala", {"Blue-White-Blue", "Quetzal bird", "Central America"}, "America"},
    {"Honduras", {"Blue-White-Blue", "Stars in center", "Central America"}, "America"},
    {"Costa Rica", {"Blue-White-Red-White-Blue", "Central America", "Flag with stripes"}, "America"},
    {"Panama", {"Stars and colors", "Central America", "Split colors"}, "America"},
    {"Jamaica", {"Green, black and gold", "Caribbean island", "Cross design"}, "America"},
    {"Trinidad and Tobago", {"Red with black and white", "Caribbean island", "Diagonal stripe"}, "America"},
    {"Bahamas", {"Aquamarine and yellow", "Black triangle", "Caribbean island"}, "America"},
    {"Barbados", {"Blue and yellow", "Trident emblem", "Caribbean island"}, "America"},
    {"Cuba", {"Red triangle", "Stars and stripes", "Caribbean island"}, "America"},
    {"Dominican Republic", {"Blue, red and white cross", "Caribbean island", "Coat of arms"}, "America"},
};

string toLowerStr(string s) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    return s;
}

int main()
{
    Mix.insert(Mix.end(), Europe.begin(), Europe.end());
    Mix.insert(Mix.end(), Asia.begin(), Asia.end());
    Mix.insert(Mix.end(), America.begin(), America.end());

    cout << "Welcome to the Flag Guessing Game!" << endl;
    cout << "Choose continent to play (Europe / Asia / America / Mix): ";
    string choice;
    getline(cin, choice);

    vector<Flags>* selectedFlags;

    if (toLowerStr(choice) == "europe") {
        selectedFlags = &Europe;
    }
    else if (toLowerStr(choice) == "asia") {
        selectedFlags = &Asia;
    }
    else if (toLowerStr(choice) == "america") {
        selectedFlags = &America;
    }
    else {
        selectedFlags = &Mix;
    }

    shuffle(selectedFlags->begin(), selectedFlags->end(), default_random_engine(static_cast<unsigned int>(time(0))));

    cout << "Please enter your name:" << endl;
    string username;
    getline(cin, username);

    int score = 0;

    for (const Flags& flag : *selectedFlags) {
        int wrongCount = 0;
        cout << "Guess the country for this flag. You have 3 wrong attempts." << endl;

        while (wrongCount < 3) {
            string randomHint = flag.hints[rand() % flag.hints.size()];
            cout << "Hint: " << randomHint << endl;

            string answer;
            cout << "Your guess: ";
            getline(cin, answer);

            if (toLowerStr(answer) == toLowerStr(flag.country)) {
                cout << "Great job! +1 point." << endl;
                score++;
                break;
            }
            else {
                wrongCount++;
                score--;
                cout << "Wrong! Attempts left: " << (3 - wrongCount) << endl;
                if (wrongCount < 3) {
                    cout << "No attempts left for this flag. The correct answer was: " << flag.country << endl;

                }
                else {
                    cout << " No attempts left.The correct answer was : " << flag.country << endl;
                    cout << "GAME OVER !!!!" << endl;
                    return 0;
                    
                }
            }
        }
        cout << "Current score: " << score << endl;
        cout << "-------------------------" << endl;
    }

    cout << username << "! Your final score is: " << score << endl;












    return 0;
}