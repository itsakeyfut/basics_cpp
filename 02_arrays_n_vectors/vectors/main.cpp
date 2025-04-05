#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    std::vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    std::cout << vowels[0] << std::endl;
    std::cout << vowels[4] << std::endl;

    std::vector<int16_t> test_scores{100, 98, 89};

    std::cout << "\nTest scores using array syntax:" << std::endl;
    std::cout << test_scores[0] << std::endl;
    std::cout << test_scores[1] << std::endl;
    std::cout << test_scores[2] << std::endl;

    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    std::cout << "\nThere are " << test_scores.size() << " scores in the vector" << std::endl;

    std::cout << "\nEnter 3 test scores:";
    std::cin >> test_scores.at(0);
    std::cin >> test_scores.at(1);
    std::cin >> test_scores.at(2);

    std::cout << "\nUpdated test scores:" << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;

    std::cout << "\nEnter a test score to add to the vector:";
    int16_t score_to_add{0};
    std::cin >> score_to_add;
    test_scores.push_back(score_to_add);

    std::cout << "\nEnter one more test score to add to the vector:";
    std::cin >> score_to_add;
    test_scores.push_back(score_to_add);

    std::cout << "\nTest scores are now:" << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    std::cout << test_scores.at(3) << std::endl;
    std::cout << test_scores.at(4) << std::endl;

    /*
     * 2D vectors
     */

    std::vector<std::vector<int16_t>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5},
    };

    std::cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << std::endl;
    std::cout << movie_ratings[0][0] << std::endl;
    std::cout << movie_ratings[0][1] << std::endl;
    std::cout << movie_ratings[0][2] << std::endl;
    std::cout << movie_ratings[0][3] << std::endl;

    std::cout << "\nHere are the movie rating for reviewer #1 using vector syntax:" << std::endl;
    std::cout << movie_ratings.at(0).at(0) << std::endl;
    std::cout << movie_ratings.at(0).at(1) << std::endl;
    std::cout << movie_ratings.at(0).at(2) << std::endl;
    std::cout << movie_ratings.at(0).at(3) << std::endl;
}