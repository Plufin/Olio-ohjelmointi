class Game
{
private:
    int answer;
    int maxnum;
    int guess_count;

protected:
    void printGameResult();

public:
    Game();

    void play();
};