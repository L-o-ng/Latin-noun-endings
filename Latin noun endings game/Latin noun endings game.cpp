#include <iostream>
#include <string>

#define M "Masculine "
#define F "Feminine "
#define N "Neuter "
#define n "Nominative"
#define v "Vocative"
#define ac "Accusative"
#define g "Genitive"
#define d "Dative"
#define ab "Ablative"
#define s " Singular"
#define p " Plural"

int main()
{
    int score = 0;
    int questionTotal = 1;
    srand((unsigned)time(0));
    std::cout << "Enter \"-\" for no endings(such as for rex)\n\n";

    while (true)
    {
        int question = 1 + std::rand() % 96;
        std::string answer{};

        switch (question) {
#pragma region 1stDeclension
        case 1:
            std::cout << "1st " << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 2:
            std::cout << "1st " << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 3:
            std::cout << "1st " << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "am")
                score++;
            break;
        case 4:
            std::cout << "1st " << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ae")
                score++;
            break;
        case 5:
            std::cout << "1st " << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ae")
                score++;
            break;
        case 6:
            std::cout << "1st " << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 7:
            std::cout << "1st " << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ae")
                score++;
            break;
        case 8:
            std::cout << "1st " << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ae")
                score++;
            break;
        case 9:
            std::cout << "1st " << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "as")
                score++;
            break;
        case 10:
            std::cout << "1st " << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "arum")
                score++;
            break;
        case 11:
            std::cout << "1st " << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 12:
            std::cout << "1st " << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
#pragma endregion
#pragma region 2ndDeclensionM



        case 13:
            std::cout << "2nd " << M << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 14:
            std::cout << "2nd " << M << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "e")
                score++;
            break;
        case 15:
            std::cout << "2nd " << M << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 16:
            std::cout << "2nd " << M << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 17:
            std::cout << "2nd " << M << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "o")
                score++;
            break;
        case 18:
            std::cout << "2nd " << M << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "o")
                score++;
            break;
        case 19:
            std::cout << "2nd " << M << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 20:
            std::cout << "2nd " << M << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 21:
            std::cout << "2nd " << M << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "os")
                score++;
            break;
        case 22:
            std::cout << "2nd " << M << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "orum")
                score++;
            break;
        case 23:
            std::cout << "2nd " << M << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 24:
            std::cout << "2nd " << M << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
#pragma endregion
#pragma region 2ndDeclensionN
        case 25:
            std::cout << "2nd " << N << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 26:
            std::cout << "2nd " << N << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 27:
            std::cout << "2nd " << N << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 28:
            std::cout << "2nd " << N << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 29:
            std::cout << "2nd " << N << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "o")
                score++;
            break;
        case 30:
            std::cout << "2nd " << N << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "o")
                score++;
            break;
        case 31:
            std::cout << "2nd " << N << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 32:
            std::cout << "2nd " << N << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 33:
            std::cout << "2nd " << N << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 34:
            std::cout << "2nd " << N << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "orum")
                score++;
            break;
        case 35:
            std::cout << "2nd " << N << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 36:
            std::cout << "2nd " << N << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
#pragma endregion
#pragma region 3rdDeclensionM
        case 37:
            std::cout << "3rd " << M << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 38:
            std::cout << "3rd " << M << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 39:
            std::cout << "3rd " << M << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "em")
                score++;
            break;
        case 40:
            std::cout << "3rd " << M << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 41:
            std::cout << "3rd " << M << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 42:
            std::cout << "3rd " << M << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "e")
                score++;
            break;
        case 43:
            std::cout << "3rd " << M << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 44:
            std::cout << "3rd " << M << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 45:
            std::cout << "3rd " << M << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 46:
            std::cout << "3rd " << M << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 47:
            std::cout << "3rd " << M << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
        case 48:
            std::cout << "3rd " << M << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
#pragma endregion
#pragma region 3rdDeclensionF
        case 49:
            std::cout << "3rd " << F << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 50:
            std::cout << "3rd " << F << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 51:
            std::cout << "3rd " << F << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "em")
                score++;
            break;
        case 52:
            std::cout << "3rd " << F << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 53:
            std::cout << "3rd " << F << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 54:
            std::cout << "3rd " << F << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "e")
                score++;
            break;
        case 55:
            std::cout << "3rd " << F << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 56:
            std::cout << "3rd " << F << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 57:
            std::cout << "3rd " << F << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 58:
            std::cout << "3rd " << F << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ium")
                score++;
            break;
        case 59:
            std::cout << "3rd " << F << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
        case 60:
            std::cout << "3rd " << F << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
#pragma endregion
#pragma region 3rdDeclensionN
        case 61:
            std::cout << "3rd " << N << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 62:
            std::cout << "3rd " << N << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 63:
            std::cout << "3rd " << N << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "-")
                score++;
            break;
        case 64:
            std::cout << "3rd " << N << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "is")
                score++;
            break;
        case 65:
            std::cout << "3rd " << N << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "i")
                score++;
            break;
        case 66:
            std::cout << "3rd " << N << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "e")
                score++;
            break;
        case 67:
            std::cout << "3rd " << N << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 68:
            std::cout << "3rd " << N << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 69:
            std::cout << "3rd " << N << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "a")
                score++;
            break;
        case 70:
            std::cout << "3rd " << N << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 71:
            std::cout << "3rd " << N << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
        case 72:
            std::cout << "3rd " << N << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
#pragma endregion
#pragma region 4thDeclension
        case 73:
            std::cout << "4th " << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 74:
            std::cout << "4th " << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 75:
            std::cout << "4th " << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "um")
                score++;
            break;
        case 76:
            std::cout << "4th " << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 77:
            std::cout << "4th " << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ui")
                score++;
            break;
        case 78:
            std::cout << "4th " << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "u")
                score++;
            break;
        case 79:
            std::cout << "4th " << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 80:
            std::cout << "4th " << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 81:
            std::cout << "4th " << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "us")
                score++;
            break;
        case 82:
            std::cout << "4th " << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "uum")
                score++;
            break;
        case 83:
            std::cout << "4th " << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
        case 84:
            std::cout << "4th " << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ibus")
                score++;
            break;
#pragma endregion
#pragma region 5thDeclension
        case 85:
            std::cout << "5th " << n << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 86:
            std::cout << "5th " << v << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 87:
            std::cout << "5th " << ac << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "em")
                score++;
            break;
        case 88:
            std::cout << "5th " << g << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ei")
                score++;
            break;
        case 89:
            std::cout << "5th " << d << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ei")
                score++;
            break;
        case 90:
            std::cout << "5th " << ab << s << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "e")
                score++;
            break;
        case 91:
            std::cout << "5th " << n << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 92:
            std::cout << "5th " << v << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 93:
            std::cout << "5th " << ac << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "es")
                score++;
            break;
        case 94:
            std::cout << "5th " << g << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "erum")
                score++;
            break;
        case 95:
            std::cout << "5th " << d << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ebus")
                score++;
            break;
        case 96:
            std::cout << "5th " << ab << p << " : ";
            std::getline(std::cin >> std::ws, answer);
            if (answer == "ebus")
                score++;
            break;
#pragma endregion
        default:
            std::cout << "OOPSIE";
            break;
        }

        std::cout << "Your score is: " << score << " out of " << questionTotal << std::endl;
        questionTotal++;
    }
}


