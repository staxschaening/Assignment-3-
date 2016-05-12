#define SFML_STATIC

#include <SFML/Graphics.hpp>
#include <iostream>

void Inputer(sf::Sprite &player);



















int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "GreenDude Explores");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	
	//VIEW STUFF
	sf::View view;
	int myX = 0;

	//
	//Loading textures, sprites, walls, player, goes here


	//loading greendude.
	sf::Texture GreenDudetx;
	GreenDudetx.loadFromFile("greendude.png");
	sf::Sprite Greendudespr(GreenDudetx);
	Greendudespr.setPosition(100, 100);

	// loading texture wall

	sf::Texture wallBrickT;
	wallBrickT.loadFromFile( "WallBrick.png");
	sf::Sprite wallBrickspr[100];

	for (int i = 0; i < 70; i++) {
		//1st bar
		wallBrickspr[i].setTexture(wallBrickT);
		wallBrickspr[0].setPosition(i * 0, 0);
		wallBrickspr[1].setPosition(i * 3, 0);
		wallBrickspr[2].setPosition(i * 6, 0);
		wallBrickspr[3].setPosition(i * 9, 0);
		wallBrickspr[4].setPosition(i * 12, 0);
		wallBrickspr[5].setPosition(i * 15, 0);
		wallBrickspr[6].setPosition(i * 18, 0);
		wallBrickspr[7].setPosition(i * 21, 0);
		wallBrickspr[8].setPosition(i * 24, 0);
		wallBrickspr[9].setPosition(i * 27, 0);
		wallBrickspr[10].setPosition(i * 27, 0);
		wallBrickspr[11].setPosition(i * 27, 50);
		wallBrickspr[12].setPosition(i * 27, 100);
		wallBrickspr[13].setPosition(i * 27, 150);
		wallBrickspr[14].setPosition(i * 27, 200);
		wallBrickspr[15].setPosition(i * 27, 250);
		wallBrickspr[16].setPosition(i * 27, 550);
		wallBrickspr[17].setPosition(i * 27, 600);
		wallBrickspr[18].setPosition(i * 27, 650);
		wallBrickspr[19].setPosition(i * 27, 700);
		wallBrickspr[20].setPosition(i * 27, 750);

		//2nd bar
		wallBrickspr[21].setPosition(i * 24, 750);
		wallBrickspr[22].setPosition(i * 21, 750);
		wallBrickspr[23].setPosition(i * 18, 750);
		wallBrickspr[24].setPosition(i * 15, 750);
		wallBrickspr[25].setPosition(i * 12, 750);
		wallBrickspr[26].setPosition(i * 9,  750);
		wallBrickspr[27].setPosition(i * 6,  750);
		wallBrickspr[28].setPosition(i * 3,  750);
		wallBrickspr[29].setPosition(i * 0,  750);
		wallBrickspr[30].setPosition(i * 0,  700);
		
























	}


	



	//
	//Our window loop
	//
	while (window.isOpen())
	{
		//
		// Checking that the window isn't closed
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}






		// store player position for collision
		sf::Vector2f playerWasHere = Greendudespr.getPosition();
		// initialising player
		Inputer(Greendudespr);
		



		//Collision check
		//WALLS
		for (int i = 0; i < 100; i++) {
			//(wallBrick[i]);

			if ((abs((int)Greendudespr.getPosition().x - (int)wallBrickspr[i].getPosition().x) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)wallBrickspr[i].getGlobalBounds().width) &&
				(abs((int)Greendudespr.getPosition().y - (int)wallBrickspr[i].getPosition().y) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)wallBrickspr[i].getGlobalBounds().height)))) {

				std::cout << "Wall1 i and Player collide\n";

				//If there was a collision, undo player movement;
				Greendudespr.setPosition(playerWasHere);
			}
		}


		
		//view = window.getView();
		view.setCenter(Greendudespr.getPosition().x, Greendudespr.getPosition().y);
		window.setView(view);

		//
		//Logic to move things, etc goes here



		//
		//Rendering
		window.clear();

		//
		//Draws go here
		//window.draw(shape);
		window.draw(Greendudespr);
		window.draw(wallBrickspr[0]);
		window.draw(wallBrickspr[1]);
		window.draw(wallBrickspr[2]);
		window.draw(wallBrickspr[3]);
		window.draw(wallBrickspr[4]);
		window.draw(wallBrickspr[5]);
		window.draw(wallBrickspr[6]);
		window.draw(wallBrickspr[7]);
		window.draw(wallBrickspr[8]);
		window.draw(wallBrickspr[9]);
		window.draw(wallBrickspr[10]);
		window.draw(wallBrickspr[11]);
		window.draw(wallBrickspr[12]);
		window.draw(wallBrickspr[13]);
		window.draw(wallBrickspr[14]);
		window.draw(wallBrickspr[15]);
		window.draw(wallBrickspr[16]);
		window.draw(wallBrickspr[17]);
		window.draw(wallBrickspr[18]);
		window.draw(wallBrickspr[19]);
		window.draw(wallBrickspr[20]);


		window.draw(wallBrickspr[21]);
		window.draw(wallBrickspr[22]);
		window.draw(wallBrickspr[23]);
		window.draw(wallBrickspr[24]);
		window.draw(wallBrickspr[25]);
		window.draw(wallBrickspr[26]);
		window.draw(wallBrickspr[27]);
		window.draw(wallBrickspr[28]);
		window.draw(wallBrickspr[29]);
		window.draw(wallBrickspr[30]);

		window.display();
	}

	return 0;
}

void Inputer(sf::Sprite &player) {

	// Check the boundry
	int boundry[4] = { 0,
		0,
		10000,
		10000}; //TODO dynamically assign based on window size
	sf::Vector2f pos = player.getPosition();
	

	int velocity = 1;
	// GH input
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {

		std::cout << ("Left\n");
		if (pos.x > boundry[0]) player.move(-velocity, 0);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {

		std::cout << ("Right\n");
		if (pos.x < boundry[2]) player.move(velocity, 0);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {

		std::cout << ("Up\n");
		if (pos.y > boundry[1]) player.move(0, -velocity);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {

		std::cout << ("Down\n");
		if (pos.y < boundry[3]) player.move(0, velocity);

	}

}