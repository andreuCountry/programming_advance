class Player {
    public:
        std::string name = "Aria";
        void increaseLife(int change);
        void increaseSpeed(int change);
        bool spendMoney(int change);
        void printPlayer();
    
    private:
        float x = 0.0f;
        float y = 0.0f;
        float speed = 5.0f;
        int hp = 100;
        int maxHp = 100;
        float minSpeed = 1;
        float maxSpeed = 100;
        int gold = 50;

    //speed ente minSpeed y maxSpeed
};