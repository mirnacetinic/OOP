class Board
{

private:
	int r, s;
	char** board;

public:
	Board();
	Board(const Board& b);
	~Board();
	Board(int a, int b);
	void matrix();
	void draw_char(struct Point& p, char ch);
	void draw_up_line(Point& p, char ch);
	void draw_line(Point& p, Point& d, char ch);
	void display();

};

struct Point
{
public:
	double x, y;
	Point(double x1, double y1)
	{
		x = x1;
		y = y1;
	};
};
