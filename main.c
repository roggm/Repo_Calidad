#include <stdio.h>


typedef struct ser
{
	char descripcion [300];
	char titulo [50];
	short int temporadas;
	char clasificacion[4];

}Series;


typedef struct gen
{
	Series serie [5];
	char genero [15];

}Generos;


int inicio(int perfil);
void incio_1(int perfil, Generos drama, Generos comedia, Generos rshow, Generos familia, Generos anime, Generos animadas, Generos infantiles);


int main()
{
	int p = 0; // perfiles

	//Genero drama = {.serie = {d1, d2, d3, d4, d5}, .genero = "drama"};
	// drama.serie[0].titulo
	//dramas
	Series d1 = {"Serie que narra los milagros de Maria a través de distintas historias de sesenta minutos en cada episodio", "La Margarita de Maria", 17, "B"};
	Series d2 = {"Insipirada en hecho reales, relata la vida de la princesa Diana y los asuntos personajes y reales que ha sufrido su persona", "The diadem", 2, "B15"};
	Series d3 = {"Narra las vidas de las siete hermanas Roadtone mientras buscan el amor y felicidad en la alta sociedad francesa", "Los Roadtone", 4, "B15"};
	Series d4 = {"Una chica rica de la alta sociedad sale en busca de su hermano a Carracas, donde termina en metida con narcos", "Odiar y morir", 1, "B15"};
	Series d5 = {"Sofía, es una diseñadora brillante y muy atractiva, por lo que, se da cuenta que la sociedad se base en la belleza", "Yo soy sofi, la guapa", 1, "AA"};
	Generos drama = {.serie = {d1, d2, d3, d4, d5}, .genero = "drama"};
	//comedias
	Series c1 = {"Los panes del mercado intentan sobrevivir un dia mas de vida despues de pasar la noche mas loca de sus vidas", "La cruda de los panes", 1, "C"};
	Series c2 = {"Los animales del rancho hacen aventuras extremas mientras tienen que aparentar que son solo animales", "El rancho", 1, "AA"};
	Series c3 = {"La amargada vida de un joven de 19 años que es echado de su casa y tiene que ganarse la vida en su viejo tsuru", "Uber", 1, "B15"};
	Series c4 = {"Narra las aventuras de dos policias que mientras cumplen con su deber e intentarn aparentar una vida perfecta, encuentran el amor en donde menos lo esperan", "Dos policias disiplinados", 1, "B15"};
	Series c5 = {"Contratada por una familia de narcos, Stephany intenta sobrevivir al día a día de la familia a prueba a las balas", "Una niñera con miedo a las balas", 1, "AA"};
	Generos comedia = {.serie = {c1, c2, c3, c4, c5}, .genero = "comedias"};
	//reality show
	Series rs1 = {"La vida diaria de la familia de los Trumps", "Los Trumps", 6, "B15"};
	Series rs2 = {"Una competencia entre actores y cantantes en una isla en la mitad del oceano atlantico, el ganador se lleva a casa un Premio Nobel", "Triangulo", 8, "B15"};
	Series rs3 = {"Narra la competencia que tiene lugar en los cielos, en donde los ángeles compiten por hacer el mejor pastel para el cumpleaños de Jesús, el ganador se convierte en un arcangel, el perdedor, irá directamente al infierno", "Heavens dinner", 4, "B15"};
	Series rs4 = {"¿Qué pasaría si una peda se convierte en una escena del crimen en cuestión de minutos? ¿A quién se culparía, a Alan, el chico que organizo la fiesta en su casa? ¿O a Santiago, el pequeño niño que encontro una pistola en la mochila de un desconocido?", "Chiapasshoot", 11, "B15"};
	Series rs5 = {"Daniel, el nuevo cocinero privado del señor Jung, pronto se da cuenta que no todo es color de rosa cuando se prepara comida para la persona mas rica de Corea", "Newcook", 7, "PG13"};
	Generos rshow = {.serie = {rs1, rs2, rs3, rs4, rs5}, .genero = "reality show"};
	//familia
	Series f1 = {"Narra las aventuras de la familia Noechegaray en un intento de sobrevivir como foraneos en una ciudad desconocida, mientras asisten a la universidad de sus sueños", "Exito Mila!", 4, "AA"};
	Series f2 = {"Edd tiene autismo desde temprana edad y ahora que es mayor de edad, tiene que aprender a convivir con Kyle, su nuevo roomate que al parecer no conoce lo que es el espacio personal ni el orden", "Edd y Kyle", 2, "AA"};
	Series f3 = {"Harry ha descubierto que tiene poderes a la hora de salvar a las personas, pero no al estilo que de Spider-Man, como todo el mundo espera, sino que es mas como un... Baymax humano", "Harry Safety", 3, "AA"};
	Series f4 = {"Jackie es un adulto joven que tiene el sueño de ser un pianista profesional algún día. Sus planes de vida de cambian cuando, buscando trabajo, la contratan como niñera de 3 niños ricos y malcriados", "Bye Jackie", 4, "PG13"};
	Series f5 = {"Es una historia de un grupo de jovenes mujeres que luchan por conseguir sus sueños en una sociedad machista que no acepta a las mujeres como iguales", "Defeatius", 1, "PG13"};
	Generos familia = {.serie = {f1, f2, f3, f4, f5}, .genero = "familia"};
	//Anime
	Series A1 = {"Killua es un niño que sueña con ser un gran asesino, como su padre. Cuando conoce a Gon en el examen para volverse un asesino profesional, se da cuenta que ha viviendo en un engaño toda su vida", "PreyxPrey", 2, "PG13"};
	Series A2 = {"Cuando la familia de Nezuko es salvada por angeles, comienza su entramiento para convertirse en una protectora de angeles, ya que la sociedad los ve como una amaneza para la humanidad", "Angel saver", 2, "PG13"};
	Series A3 = {"Al cumplir los 17 años, Portgas D. Ace empieza su viaje por el mundo para convertirse en el rey de los piratas, ¿El problema? El tesoro del antiguo rey pirata esta dividido y escondido en dos lugares diferentes", "Two completes", 20, "B15"};
	Series A4 = {"Ichigo es un joven de 17 años que tiene la habilidad de ver espiritus. Cuando un espiritu llamado Rukia es lastimado de muerte, Ichigo se ve obligado a tomar sus poderes para luchar", "Vinegar", 3, "PG13"};
	Series A5 = {"Haruna es una chica que un dia se encuentra un libro magico en el sótano de tu casa, después de descubrir que hay tazos atrapados dentro del libro, se propone encontrar los tres libros existentes para liberar a todos los tazos", "Haruna pog releaser", 3, "PG13"};
	Generos anime = {.serie = {A1, A2, A3, A4, A5}, .genero = "anime"};
	//Animadas
	Series a1 = {"La serie se centra en el equipo avatar, un grupo de amigos que intentar salvar al mundo de las manos de un genocida que piensa que su nación es superior a las demás", "El mito de gil", 3, "AA"};
	Series a2 = {"Cuenta la leyenda de como fue creado el sol y la luna, o mas bien, es la historia de Olmeca, la chica que salvo al mundo", "Olmeca y el trio", 2, "AA"};
	Series a3 = {"Abril es una chica que vive en su cabeza y sueña con ser comprendida, es por eso que, cuando su madre decide enviarla a un campamento de verano para suprimir la creatividad, utiliza todos los medios posibles para escapar de ahi, acabando en otro universo lleno de magia", "The pidgeon apartment", 3, "AA"};
	Series a4 = {"Cuando Marco decide tomar el curso de verano de astronomia, no se imagina que todo su mundo esta por cambiar... Bueno, no solo su mundo, el planeta Tierra podría terminar en un agujero de gusano si no se apresura y termina su proyecto", "Start void", 3, "B15"};
	Series a5 = {"Mas que una serie, es un pedazo de corazón que te enseña a encontrar la paz contigo mismo y con los demas", "Unique peace", 1, "PG13"};
	Generos animadas = {.serie = {a1, a2, a3, a4, a5}, .genero = "animadas"};
	//infantiles
	Series i1 = {"La magia se concentra en la cochera de Tato, en donde sus amigos viven nuevas aventuras todas las tardes", "Frontyardigans", 4, "AA"};
	Series i2 = {"Cuenta el punto de vista de la vida de Bingo y su hermana mayor, dos pequeños gatos que viven con sus padres e inventan juegos diferentes todos los días", "Bingo", 2, "AA"};
	Series i3 = {"Narra las aventuras de Josefina, una niña de 6 años que vive en el bosque con su mejor amigo lobo", "Josefina y el lobo", 3, "AA"};
	Series i4 = {"La serie cuenta la historia de Muchotu, una niña de 4 años que se encuentra en su proceso de descrubrir el mundo y vivir muchas aventuras junto a sus amigos", "Muchotu", 5, "AA"};
	Series i5 = {"Narra las aventuras de Sunset Shimer, una yegua que busca su lugar en el mundo con ayuda del amor de los que la rodean", "Your big stallion", 9, "AA"};
	Generos infantiles = {.serie = {i1, i2, i3, i4, i5}, .genero = "infantiles"};

	p = inicio(p);

	incio_1(p, drama, comedia, rshow, familia, anime, animadas, infantiles);


}

int inicio(int perfil)
{
	// Pagina de perfiles
	int verificar = 1;

	while (verificar == 1)
	{
		printf("Bienvenido de nuevo a Nutfliz! \n");
		printf("¿Quién está viendo ahora? \n");
		printf("\t1. Mamá\n \t2. Alejandro\n \t3. Niños \n");
		scanf("%d", &perfil);

		if ((perfil < 4) && (perfil > 0))
		{
			verificar = 0;
		}

	}

	return perfil;
}

void incio_1(int perfil, Generos drama, Generos comedia, Generos rshow, Generos familia, Generos anime, Generos animadas, Generos infantiles)
{
	int cat = 0; // categoria
	int ser = 0; // serie
	int v_1 = 0;
	int v_2 = 0;
	int v_3 = 0;
	// Diferentes opciones segun los perfiles
	if (perfil == 1)
	{
		while (v_1 == 0)
		{
			printf("¿Qué género deseas ver? \n");
			printf("Aquí te dejamos nuestras recomendaciones: \n\t1. Drama \n\t2. Reality Shows \n\t3. Comedia \n\t4. Familia\n");
			scanf("%d", &cat);

			if ((cat < 5) && (cat > 0))
			{
				v_1 = 1;
			}

		}

		if (cat == 1)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", drama.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", drama.serie[0].titulo, drama.serie[1].titulo, drama.serie[2].titulo, drama.serie[3].titulo, drama.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", drama.serie[0].titulo);
				printf("Clasificación: %s\n", drama.serie[0].clasificacion);
				printf("Temporadas: %d\n", drama.serie[0].temporadas);
				printf("Descripción: %s\n", drama.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", drama.serie[1].titulo);
				printf("Clasificación: %s\n", drama.serie[1].clasificacion);
				printf("Temporadas: %d\n", drama.serie[1].temporadas);
				printf("Descripción: %s\n", drama.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", drama.serie[2].titulo);
				printf("Clasificación: %s\n", drama.serie[2].clasificacion);
				printf("Temporadas: %d\n", drama.serie[2].temporadas);
				printf("Descripción: %s\n", drama.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", drama.serie[3].titulo);
				printf("Clasificación: %s\n", drama.serie[3].clasificacion);
				printf("Temporadas: %d\n", drama.serie[3].temporadas);
				printf("Descripción: %s\n", drama.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", drama.serie[4].titulo);
				printf("Clasificación: %s\n", drama.serie[4].clasificacion);
				printf("Temporadas: %d\n", drama.serie[4].temporadas);
				printf("Descripción: %s\n", drama.serie[4].descripcion);
			}

		}
		else if (cat == 2)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", rshow.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", rshow.serie[0].titulo, rshow.serie[1].titulo, rshow.serie[2].titulo, rshow.serie[3].titulo, rshow.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", rshow.serie[0].titulo);
				printf("Clasificación: %s\n", rshow.serie[0].clasificacion);
				printf("Temporadas: %d\n", rshow.serie[0].temporadas);
				printf("Descripción: %s\n", rshow.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", rshow.serie[1].titulo);
				printf("Clasificación: %s\n", rshow.serie[1].clasificacion);
				printf("Temporadas: %d\n", rshow.serie[1].temporadas);
				printf("Descripción: %s\n", rshow.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", rshow.serie[2].titulo);
				printf("Clasificación: %s\n", rshow.serie[2].clasificacion);
				printf("Temporadas: %d\n", rshow.serie[2].temporadas);
				printf("Descripción: %s\n", rshow.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", rshow.serie[3].titulo);
				printf("Clasificación: %s\n", rshow.serie[3].clasificacion);
				printf("Temporadas: %d\n", rshow.serie[3].temporadas);
				printf("Descripción: %s\n", rshow.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", rshow.serie[4].titulo);
				printf("Clasificación: %s\n", rshow.serie[4].clasificacion);
				printf("Temporadas: %d\n", rshow.serie[4].temporadas);
				printf("Descripción: %s\n", rshow.serie[4].descripcion);
			}
		}
		else if (cat == 3)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", comedia.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n",  comedia.serie[0].titulo,  comedia.serie[1].titulo,  comedia.serie[2].titulo,  comedia.serie[3].titulo,  comedia.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n",  comedia.serie[0].titulo);
				printf("Clasificación: %s\n",  comedia.serie[0].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[0].temporadas);
				printf("Descripción: %s\n",  comedia.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n",  comedia.serie[1].titulo);
				printf("Clasificación: %s\n",  comedia.serie[1].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[1].temporadas);
				printf("Descripción: %s\n",  comedia.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n",  comedia.serie[2].titulo);
				printf("Clasificación: %s\n",  comedia.serie[2].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[2].temporadas);
				printf("Descripción: %s\n",  comedia.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n",  comedia.serie[3].titulo);
				printf("Clasificación: %s\n",  comedia.serie[3].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[3].temporadas);
				printf("Descripción: %s\n",  comedia.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n",  comedia.serie[4].titulo);
				printf("Clasificación: %s\n",  comedia.serie[4].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[4].temporadas);
				printf("Descripción: %s\n",  comedia.serie[4].descripcion);
			}
		}
		else if (cat == 4)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", familia.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n",   familia.serie[0].titulo,   familia.serie[1].titulo,   familia.serie[2].titulo,   familia.serie[3].titulo,   familia.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n",   familia.serie[0].titulo);
				printf("Clasificación: %s\n",   familia.serie[0].clasificacion);
				printf("Temporadas: %d\n",   familia.serie[0].temporadas);
				printf("Descripción: %s\n",   familia.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n",   familia.serie[1].titulo);
				printf("Clasificación: %s\n",   familia.serie[1].clasificacion);
				printf("Temporadas: %d\n",   familia.serie[1].temporadas);
				printf("Descripción: %s\n",   familia.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n",   familia.serie[2].titulo);
				printf("Clasificación: %s\n",   familia.serie[2].clasificacion);
				printf("Temporadas: %d\n",   familia.serie[2].temporadas);
				printf("Descripción: %s\n",   familia.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n",   familia.serie[3].titulo);
				printf("Clasificación: %s\n",   familia.serie[3].clasificacion);
				printf("Temporadas: %d\n",   familia.serie[3].temporadas);
				printf("Descripción: %s\n",   familia.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n",   familia.serie[4].titulo);
				printf("Clasificación: %s\n",   familia.serie[4].clasificacion);
				printf("Temporadas: %d\n",   familia.serie[4].temporadas);
				printf("Descripción: %s\n",   familia.serie[4].descripcion);
			}
		}
	}

	else if (perfil == 2)
	{
		while (v_1 == 0)
		{
			printf("¿Qué género deseas ver? \n");
			printf("Aquí te dejamos nuestras recomendaciones: \n\t1. Drama \n\t2. Anime \n\t3. Comedia \n");
			scanf("%d", &cat);

			if ((cat < 4) && (cat > 0))
			{
				v_1 = 1;
			}

		}

		if (cat == 1)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", drama.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", drama.serie[0].titulo, drama.serie[1].titulo, drama.serie[2].titulo, drama.serie[3].titulo, drama.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", drama.serie[0].titulo);
				printf("Clasificación: %s\n", drama.serie[0].clasificacion);
				printf("Temporadas: %d\n", drama.serie[0].temporadas);
				printf("Descripción: %s\n", drama.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", drama.serie[1].titulo);
				printf("Clasificación: %s\n", drama.serie[1].clasificacion);
				printf("Temporadas: %d\n", drama.serie[1].temporadas);
				printf("Descripción: %s\n", drama.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", drama.serie[2].titulo);
				printf("Clasificación: %s\n", drama.serie[2].clasificacion);
				printf("Temporadas: %d\n", drama.serie[2].temporadas);
				printf("Descripción: %s\n", drama.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", drama.serie[3].titulo);
				printf("Clasificación: %s\n", drama.serie[3].clasificacion);
				printf("Temporadas: %d\n", drama.serie[3].temporadas);
				printf("Descripción: %s\n", drama.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", drama.serie[4].titulo);
				printf("Clasificación: %s\n", drama.serie[4].clasificacion);
				printf("Temporadas: %d\n", drama.serie[4].temporadas);
				printf("Descripción: %s\n", drama.serie[4].descripcion);
			}

		}
		else if (cat == 2)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", anime.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", anime.serie[0].titulo, anime.serie[1].titulo, anime.serie[2].titulo, anime.serie[3].titulo, anime.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", anime.serie[0].titulo);
				printf("Clasificación: %s\n", anime.serie[0].clasificacion);
				printf("Temporadas: %d\n", anime.serie[0].temporadas);
				printf("Descripción: %s\n", anime.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", anime.serie[1].titulo);
				printf("Clasificación: %s\n", anime.serie[1].clasificacion);
				printf("Temporadas: %d\n", anime.serie[1].temporadas);
				printf("Descripción: %s\n", anime.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", anime.serie[2].titulo);
				printf("Clasificación: %s\n", anime.serie[2].clasificacion);
				printf("Temporadas: %d\n", anime.serie[2].temporadas);
				printf("Descripción: %s\n", anime.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", anime.serie[3].titulo);
				printf("Clasificación: %s\n", anime.serie[3].clasificacion);
				printf("Temporadas: %d\n", anime.serie[3].temporadas);
				printf("Descripción: %s\n", anime.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", anime.serie[4].titulo);
				printf("Clasificación: %s\n", anime.serie[4].clasificacion);
				printf("Temporadas: %d\n", anime.serie[4].temporadas);
				printf("Descripción: %s\n", anime.serie[4].descripcion);
			}
		}
		else if (cat == 3)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", comedia.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n",  comedia.serie[0].titulo,  comedia.serie[1].titulo,  comedia.serie[2].titulo,  comedia.serie[3].titulo,  comedia.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n",  comedia.serie[0].titulo);
				printf("Clasificación: %s\n",  comedia.serie[0].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[0].temporadas);
				printf("Descripción: %s\n",  comedia.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n",  comedia.serie[1].titulo);
				printf("Clasificación: %s\n",  comedia.serie[1].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[1].temporadas);
				printf("Descripción: %s\n",  comedia.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n",  comedia.serie[2].titulo);
				printf("Clasificación: %s\n",  comedia.serie[2].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[2].temporadas);
				printf("Descripción: %s\n",  comedia.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n",  comedia.serie[3].titulo);
				printf("Clasificación: %s\n",  comedia.serie[3].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[3].temporadas);
				printf("Descripción: %s\n",  comedia.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n",  comedia.serie[4].titulo);
				printf("Clasificación: %s\n",  comedia.serie[4].clasificacion);
				printf("Temporadas: %d\n",  comedia.serie[4].temporadas);
				printf("Descripción: %s\n",  comedia.serie[4].descripcion);
			}
		}


	}
	else if (perfil == 3)
	{
		while (v_1 == 0)
		{
			printf("¿Qué género deseas ver? \n");
			printf("Aquí te dejamos nuestras recomendaciones: \n\t1. Animadas \n\t2. Infantiles \n");
			scanf("%d", &cat);

			if ((cat < 3) && (cat > 0))
			{
				v_1 = 1;
			}

		}

		if (cat == 1)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", animadas.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", animadas.serie[0].titulo, animadas.serie[1].titulo, animadas.serie[2].titulo, animadas.serie[3].titulo, animadas.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", animadas.serie[0].titulo);
				printf("Clasificación: %s\n", animadas.serie[0].clasificacion);
				printf("Temporadas: %d\n", animadas.serie[0].temporadas);
				printf("Descripción: %s\n", animadas.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", animadas.serie[1].titulo);
				printf("Clasificación: %s\n", animadas.serie[1].clasificacion);
				printf("Temporadas: %d\n", animadas.serie[1].temporadas);
				printf("Descripción: %s\n", animadas.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", animadas.serie[2].titulo);
				printf("Clasificación: %s\n", animadas.serie[2].clasificacion);
				printf("Temporadas: %d\n", animadas.serie[2].temporadas);
				printf("Descripción: %s\n", animadas.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", animadas.serie[3].titulo);
				printf("Clasificación: %s\n", animadas.serie[3].clasificacion);
				printf("Temporadas: %d\n", animadas.serie[3].temporadas);
				printf("Descripción: %s\n", animadas.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", animadas.serie[4].titulo);
				printf("Clasificación: %s\n", animadas.serie[4].clasificacion);
				printf("Temporadas: %d\n", animadas.serie[4].temporadas);
				printf("Descripción: %s\n", animadas.serie[4].descripcion);
			}

		}
		else if (cat == 2)
		{
			while(v_2 == 0)
			{
				printf(" Series de %s\n", infantiles.genero);
				printf(" 1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n", infantiles.serie[0].titulo, infantiles.serie[1].titulo, infantiles.serie[2].titulo, infantiles.serie[3].titulo, infantiles.serie[4].titulo );
				scanf("%d", &ser);

				if ((cat < 6) && (cat > 0))
				{
					v_2 = 1;
				}
			}

			if(ser == 1)
			{
				printf("Titulo: %s\n", infantiles.serie[0].titulo);
				printf("Clasificación: %s\n", infantiles.serie[0].clasificacion);
				printf("Temporadas: %d\n", infantiles.serie[0].temporadas);
				printf("Descripción: %s\n", infantiles.serie[0].descripcion);
			}
			else if(ser == 2)
			{
				printf("Titulo: %s\n", infantiles.serie[1].titulo);
				printf("Clasificación: %s\n", infantiles.serie[1].clasificacion);
				printf("Temporadas: %d\n", infantiles.serie[1].temporadas);
				printf("Descripción: %s\n", infantiles.serie[1].descripcion);
			}
			else if(ser == 3)
			{
				printf("Titulo: %s\n", infantiles.serie[2].titulo);
				printf("Clasificación: %s\n", infantiles.serie[2].clasificacion);
				printf("Temporadas: %d\n", infantiles.serie[2].temporadas);
				printf("Descripción: %s\n", infantiles.serie[2].descripcion);
			}
			else if(ser == 4)
			{
				printf("Titulo: %s\n", infantiles.serie[3].titulo);
				printf("Clasificación: %s\n", infantiles.serie[3].clasificacion);
				printf("Temporadas: %d\n", infantiles.serie[3].temporadas);
				printf("Descripción: %s\n", infantiles.serie[3].descripcion);
			}
			else if(ser == 5)
			{
				printf("Titulo: %s\n", infantiles.serie[4].titulo);
				printf("Clasificación: %s\n", infantiles.serie[4].clasificacion);
				printf("Temporadas: %d\n", infantiles.serie[4].temporadas);
				printf("Descripción: %s\n", infantiles.serie[4].descripcion);
			}
		}

	}
}