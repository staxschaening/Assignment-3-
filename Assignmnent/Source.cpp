#define SFML_STATIC

#include <SFML/Graphics.hpp>
#include <iostream>
//#include "Menu.h"



void Inputer(sf::Sprite & player);






class enemy
{
public:




};

/* part of the menu system could not implemented and isnt complete however the class diagram will clarify the process.
void ();



Menu menu(window.getSize().x, window.getSize().y);



while (window.pollEvent(event))
{
switch (event.type)
{
case sf::Event::KeyReleased:
switch (event.key.code)
{
case sf::Keyboard::Up:
menu.MoveUp();
break;

case sf::Keyboard::Down:
menu.MoveDown();
break;

case sf::Keyboard::Return:
switch (menu.GetPressedItem())
{
case 0:
std::cout << "Play button has been pressed" << std::endl;
break;
case 1:
std::cout << "Option button has been pressed" << std::endl;
break;
case 2:
window.close();
break;
}

break;
}

break;
case sf::Event::Closed:
window.close();

break;

}
}

window.clear();

menu.draw(window);

window.display();
}
} */






int main()
{
	//this is the window screen.
	sf::RenderWindow window(sf::VideoMode(800, 800), "GreenDude Explores");

	//Test of Rendering Shapes.

	//sf::CircleShape shape(100.f);
	//shape.setPosition(250, 200);
	//shape.setFillColor(sf::Color::Blue);
	//shape.setScale(10, 10);





	//VIEW STUFF
	sf::View view;
	int myX = 0;





	//
	//Loading textures, sprites, walls, player & Enemys

	//loading Enemy1
	sf::Texture Reddudebluetx;
	Reddudebluetx.loadFromFile("Enemy.png");
	sf::Sprite Reddudebluespr(Reddudebluetx);
	Reddudebluespr.setPosition(4500, 400);

	//loading Enemy2
	sf::Texture Yellowdudebluetx;
	Yellowdudebluetx.loadFromFile("Yellowen.png");
	sf::Sprite Yellowdudebluespr(Yellowdudebluetx);
	Yellowdudebluespr.setPosition(850, 400);


	//loading greendude.
	sf::Texture GreenDudetx;
	GreenDudetx.loadFromFile("greendude.png");
	sf::Sprite Greendudespr(GreenDudetx);
	Greendudespr.setPosition(100, 100);

	// loading texture wall, map
	// looping and creating more wallbricks
	sf::Texture wallBrickT;
	wallBrickT.loadFromFile("WallBrick.png");
	sf::Sprite wallBrickspr[132];

	for (int i = 0; i < 130; i++) {

		//starting top bar
		wallBrickspr[i].setTexture(wallBrickT);
		wallBrickspr[0].setPosition(i * 0, 0);
		wallBrickspr[1].setPosition(i * 1, 0);
		wallBrickspr[2].setPosition(i * 2, 0);
		wallBrickspr[3].setPosition(i * 3, 0);
		wallBrickspr[4].setPosition(i * 4, 0);
		wallBrickspr[5].setPosition(i * 5, 0);
		wallBrickspr[6].setPosition(i * 6, 0);
		wallBrickspr[7].setPosition(i * 7, 0);
		wallBrickspr[8].setPosition(i * 8, 0);
		//starting opening bar
		wallBrickspr[9].setPosition(i * 9, 0);
		wallBrickspr[10].setPosition(i * 9, 0);
		wallBrickspr[11].setPosition(i * 9, 50);
		wallBrickspr[12].setPosition(i * 9, 100);
		wallBrickspr[13].setPosition(i * 9, 150);
		wallBrickspr[14].setPosition(i * 9, 200);
		wallBrickspr[15].setPosition(i * 9, 250);
		wallBrickspr[16].setPosition(i * 9, 550);
		wallBrickspr[17].setPosition(i * 9, 600);
		wallBrickspr[18].setPosition(i * 9, 650);
		wallBrickspr[19].setPosition(i * 9, 700);
		wallBrickspr[20].setPosition(i * 9, 750);

		//starting bottom bar
		wallBrickspr[21].setPosition(i * 8, 750);
		wallBrickspr[22].setPosition(i * 7, 750);
		wallBrickspr[23].setPosition(i * 6, 750);
		wallBrickspr[24].setPosition(i * 5, 750);
		wallBrickspr[25].setPosition(i * 4, 750);
		wallBrickspr[26].setPosition(i * 3, 750);
		wallBrickspr[27].setPosition(i * 2, 750);
		wallBrickspr[28].setPosition(i * 1, 750);
		wallBrickspr[29].setPosition(i * 0, 750);

		//starting close off bar
		wallBrickspr[30].setPosition(i * 0, 700);
		wallBrickspr[31].setPosition(i * 0, 650);
		wallBrickspr[32].setPosition(i * 0, 600);
		wallBrickspr[33].setPosition(i * 0, 550);
		wallBrickspr[34].setPosition(i * 0, 500);
		wallBrickspr[35].setPosition(i * 0, 450);
		wallBrickspr[36].setPosition(i * 0, 400);
		wallBrickspr[37].setPosition(i * 0, 350);
		wallBrickspr[38].setPosition(i * 0, 300);
		wallBrickspr[39].setPosition(i * 0, 250);
		wallBrickspr[40].setPosition(i * 0, 200);
		wallBrickspr[41].setPosition(i * 0, 150);
		wallBrickspr[42].setPosition(i * 0, 100);
		wallBrickspr[43].setPosition(i * 0, 50);

		//Bridge top 
		wallBrickspr[87].setPosition(i * 10, 250);
		wallBrickspr[88].setPosition(i * 11, 250);
		wallBrickspr[89].setPosition(i * 12, 250);
		wallBrickspr[90].setPosition(i * 13, 250);
		wallBrickspr[91].setPosition(i * 14, 250);
		wallBrickspr[92].setPosition(i * 15, 250);
		wallBrickspr[93].setPosition(i * 16, 250);
		wallBrickspr[94].setPosition(i * 17, 250);
		wallBrickspr[95].setPosition(i * 18, 250);
		wallBrickspr[96].setPosition(i * 19, 250);
		wallBrickspr[97].setPosition(i * 20, 250);
		wallBrickspr[98].setPosition(i * 21, 250);
		wallBrickspr[99].setPosition(i * 22, 250);
		wallBrickspr[100].setPosition(i * 23, 250);
		wallBrickspr[101].setPosition(i * 24, 250);
		wallBrickspr[102].setPosition(i * 25, 250);
		wallBrickspr[103].setPosition(i * 26, 250);
		wallBrickspr[104].setPosition(i * 27, 250);
		wallBrickspr[105].setPosition(i * 28, 250);
		wallBrickspr[106].setPosition(i * 29, 250);

		// bottom
		wallBrickspr[107].setPosition(i * 10, 550);
		wallBrickspr[108].setPosition(i * 11, 550);
		wallBrickspr[109].setPosition(i * 12, 550);
		wallBrickspr[110].setPosition(i * 13, 550);
		wallBrickspr[112].setPosition(i * 14, 550);
		wallBrickspr[113].setPosition(i * 15, 550);
		wallBrickspr[114].setPosition(i * 16, 550);
		wallBrickspr[115].setPosition(i * 17, 550);
		wallBrickspr[116].setPosition(i * 18, 550);
		wallBrickspr[117].setPosition(i * 19, 550);
		wallBrickspr[118].setPosition(i * 20, 550);
		wallBrickspr[119].setPosition(i * 21, 550);
		wallBrickspr[120].setPosition(i * 22, 550);
		wallBrickspr[121].setPosition(i * 23, 550);
		wallBrickspr[122].setPosition(i * 24, 550);
		wallBrickspr[123].setPosition(i * 25, 550);
		wallBrickspr[124].setPosition(i * 26, 550);
		wallBrickspr[125].setPosition(i * 27, 550);
		wallBrickspr[126].setPosition(i * 28, 550);
		wallBrickspr[127].setPosition(i * 29, 550);


		//2nd Box
		wallBrickspr[44].setPosition(i * 30, 0);
		wallBrickspr[45].setPosition(i * 31, 0);
		wallBrickspr[46].setPosition(i * 32, 0);
		wallBrickspr[47].setPosition(i * 33, 0);
		wallBrickspr[48].setPosition(i * 34, 0);
		wallBrickspr[49].setPosition(i * 35, 0);
		wallBrickspr[50].setPosition(i * 36, 0);
		wallBrickspr[51].setPosition(i * 37, 0);
		wallBrickspr[52].setPosition(i * 38, 0);

		// opneing bar
		wallBrickspr[53].setPosition(i * 30, 0);
		wallBrickspr[53].setPosition(i * 30, 0);
		wallBrickspr[54].setPosition(i * 30, 50);
		wallBrickspr[55].setPosition(i * 30, 100);
		wallBrickspr[56].setPosition(i * 30, 150);
		wallBrickspr[57].setPosition(i * 30, 200);
		wallBrickspr[58].setPosition(i * 30, 250);
		wallBrickspr[59].setPosition(i * 30, 550);
		wallBrickspr[60].setPosition(i * 30, 600);
		wallBrickspr[61].setPosition(i * 30, 650);
		wallBrickspr[62].setPosition(i * 30, 700);
		wallBrickspr[63].setPosition(i * 30, 750);

		//starting bottom bar
		wallBrickspr[64].setPosition(i * 38, 750);
		wallBrickspr[65].setPosition(i * 37, 750);
		wallBrickspr[66].setPosition(i * 36, 750);
		wallBrickspr[67].setPosition(i * 35, 750);
		wallBrickspr[68].setPosition(i * 34, 750);
		wallBrickspr[69].setPosition(i * 33, 750);
		wallBrickspr[70].setPosition(i * 32, 750);
		wallBrickspr[71].setPosition(i * 31, 750);
		wallBrickspr[72].setPosition(i * 30, 750);

		//starting close off bar
		wallBrickspr[73].setPosition(i * 38, 700);
		wallBrickspr[74].setPosition(i * 38, 650);
		wallBrickspr[75].setPosition(i * 38, 600);
		wallBrickspr[76].setPosition(i * 38, 550);
		wallBrickspr[77].setPosition(i * 38, 500);
		wallBrickspr[78].setPosition(i * 38, 450);
		wallBrickspr[79].setPosition(i * 38, 400);
		wallBrickspr[80].setPosition(i * 38, 350);
		wallBrickspr[81].setPosition(i * 38, 300);
		wallBrickspr[82].setPosition(i * 38, 250);
		wallBrickspr[83].setPosition(i * 38, 200);
		wallBrickspr[84].setPosition(i * 38, 150);
		wallBrickspr[85].setPosition(i * 38, 100);
		wallBrickspr[86].setPosition(i * 38, 50);

	}


	//Menu menu(window.getSize().x, window.getSize().y);


	//
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
		for (int i = 0; i < 130; i++) {
			//(wallBrick[i]);

			if ((abs((int)Greendudespr.getPosition().x - (int)wallBrickspr[i].getPosition().x) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)wallBrickspr[i].getGlobalBounds().width) &&
				(abs((int)Greendudespr.getPosition().y - (int)wallBrickspr[i].getPosition().y) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)wallBrickspr[i].getGlobalBounds().height)))) {

				std::cout << "Wall1 i and Player collide\n";

				//If there was a collision, undo player movement;
				Greendudespr.setPosition(playerWasHere);
			}
		}

		// collision for enemy 1
		if ((abs((int)Greendudespr.getPosition().x - (int)Reddudebluespr.getPosition().x) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)Reddudebluespr.getGlobalBounds().width) &&
			(abs((int)Greendudespr.getPosition().y - (int)Reddudebluespr.getPosition().y) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)Reddudebluespr.getGlobalBounds().height)))) {

			std::cout << "Wall1 i and Player collide\n";

			//If there was a collision, undo player movement;
			Greendudespr.setPosition(playerWasHere);
			//game restarts when player touches enemy
			Greendudespr.setPosition(100, 100);
		}

		// collision for enemy 2
		if ((abs((int)Greendudespr.getPosition().x - (int)Yellowdudebluespr.getPosition().x) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)Yellowdudebluespr.getGlobalBounds().width) &&
			(abs((int)Greendudespr.getPosition().y - (int)Yellowdudebluespr.getPosition().y) * 2 < ((int)Greendudespr.getGlobalBounds().width + (int)Yellowdudebluespr.getGlobalBounds().height)))) {

			std::cout << "Collided with enemy 2 \n";

			//If there was a collision, undo player movement;
			Greendudespr.setPosition(playerWasHere);
			//game restarts when player touches enemy
			Greendudespr.setPosition(100, 100);
		}


		//view = window.getView();
		view.setCenter(Greendudespr.getPosition().x, Greendudespr.getPosition().y);
		window.setView(view);




















		//
		//Rendering
		window.clear();

		//
		//Draws go here
		//window.draw(shape);
		//player being drawn in 
		window.draw(Greendudespr);
		//Enemy1 is drawn
		window.draw(Reddudebluespr);
		//Enemy2 is drawn
		window.draw(Yellowdudebluespr);


		//wall textures being drawn in
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
		window.draw(wallBrickspr[31]);
		window.draw(wallBrickspr[32]);
		window.draw(wallBrickspr[33]);
		window.draw(wallBrickspr[34]);
		window.draw(wallBrickspr[35]);
		window.draw(wallBrickspr[36]);
		window.draw(wallBrickspr[37]);
		window.draw(wallBrickspr[38]);
		window.draw(wallBrickspr[39]);
		window.draw(wallBrickspr[40]);
		window.draw(wallBrickspr[41]);
		window.draw(wallBrickspr[42]);
		window.draw(wallBrickspr[43]);
		window.draw(wallBrickspr[44]);
		window.draw(wallBrickspr[45]);
		window.draw(wallBrickspr[46]);
		window.draw(wallBrickspr[47]);
		window.draw(wallBrickspr[48]);
		window.draw(wallBrickspr[49]);
		window.draw(wallBrickspr[50]);
		window.draw(wallBrickspr[51]);
		window.draw(wallBrickspr[52]);
		window.draw(wallBrickspr[53]);
		window.draw(wallBrickspr[54]);
		window.draw(wallBrickspr[55]);
		window.draw(wallBrickspr[56]);
		window.draw(wallBrickspr[57]);
		window.draw(wallBrickspr[58]);
		window.draw(wallBrickspr[59]);
		window.draw(wallBrickspr[60]);
		window.draw(wallBrickspr[61]);
		window.draw(wallBrickspr[62]);
		window.draw(wallBrickspr[63]);
		window.draw(wallBrickspr[64]);
		window.draw(wallBrickspr[65]);
		window.draw(wallBrickspr[66]);
		window.draw(wallBrickspr[67]);
		window.draw(wallBrickspr[68]);
		window.draw(wallBrickspr[69]);
		window.draw(wallBrickspr[70]);
		window.draw(wallBrickspr[71]);
		window.draw(wallBrickspr[72]);
		window.draw(wallBrickspr[73]);
		window.draw(wallBrickspr[74]);
		window.draw(wallBrickspr[75]);
		window.draw(wallBrickspr[76]);
		window.draw(wallBrickspr[77]);
		window.draw(wallBrickspr[78]);
		window.draw(wallBrickspr[79]);
		window.draw(wallBrickspr[80]);
		window.draw(wallBrickspr[81]);
		window.draw(wallBrickspr[82]);
		window.draw(wallBrickspr[83]);
		window.draw(wallBrickspr[84]);
		window.draw(wallBrickspr[85]);
		window.draw(wallBrickspr[86]);
		window.draw(wallBrickspr[87]);
		window.draw(wallBrickspr[88]);
		window.draw(wallBrickspr[89]);
		window.draw(wallBrickspr[90]);
		window.draw(wallBrickspr[91]);
		window.draw(wallBrickspr[92]);
		window.draw(wallBrickspr[93]);
		window.draw(wallBrickspr[94]);
		window.draw(wallBrickspr[95]);
		window.draw(wallBrickspr[96]);
		window.draw(wallBrickspr[97]);
		window.draw(wallBrickspr[98]);
		window.draw(wallBrickspr[99]);
		window.draw(wallBrickspr[100]);
		window.draw(wallBrickspr[101]);
		window.draw(wallBrickspr[102]);
		window.draw(wallBrickspr[103]);
		window.draw(wallBrickspr[104]);
		window.draw(wallBrickspr[105]);
		window.draw(wallBrickspr[106]);
		window.draw(wallBrickspr[107]);
		window.draw(wallBrickspr[108]);
		window.draw(wallBrickspr[109]);
		window.draw(wallBrickspr[110]);
		window.draw(wallBrickspr[111]);
		window.draw(wallBrickspr[112]);
		window.draw(wallBrickspr[113]);
		window.draw(wallBrickspr[114]);
		window.draw(wallBrickspr[115]);
		window.draw(wallBrickspr[116]);
		window.draw(wallBrickspr[117]);
		window.draw(wallBrickspr[118]);
		window.draw(wallBrickspr[119]);
		window.draw(wallBrickspr[120]);
		window.draw(wallBrickspr[121]);
		window.draw(wallBrickspr[122]);
		window.draw(wallBrickspr[123]);
		window.draw(wallBrickspr[124]);
		window.draw(wallBrickspr[125]);
		window.draw(wallBrickspr[126]);
		window.draw(wallBrickspr[127]);

		//menu.draw(window);

		window.display();
	}

	return 0;
}



void Inputer(sf::Sprite &player) {

	// Check the boundry
	int boundry[4] = { 0,
		0,
		10000,
		10000 }; //TODO dynamically assign based on window size
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