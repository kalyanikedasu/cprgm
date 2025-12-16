*Docker def
	Docker is a tool that allows us to run applications inside containers

*Why Docker is used
	->Avoids “works on my machine” problem
	->Easy to move application to another system
	->Lightweight compared to Virtual Machines
	->Used in companies for deployment

*Installed Docker

*Create Docker directory - mkdir docker

*Write any c code - vim hello.c, save and exit

*Create Dockerfile- vim Dockerfile(D should be capital and no extensions)
	->write docker file contents

*Build Docker image
	->command-----   docker build -t hello_docker .(dot is mandatory)

*Run Docker container
	->command-----   docker run hello_docker
	->You'll see the output on screen from .c file

*Verify container creation
	->command-----   docker ps -a

