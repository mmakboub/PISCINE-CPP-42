

int PhoneBook::checkspace(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] != ' ')
            return(0);
        i++;
    }
    return(1);
}
int	PhoneBook::isnotdigits(std::string s)
{
	int	i=0;
    
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (0); 
		i++;
	}
	return (1);
}
std::string PhoneBook::handle(std::string msg)
{
    std::string input;
    while (1)
    { 
        std::cout << msg;
        std::getline(std::cin, input);
        if(std::cin.eof())
            exit(1);
        if(msg == "Entrer votre numero : ")
        {
            bool isvalid = true;
            for (int i = 0; i < (int)input.length(); i++)
            {
                if (!isdigit(input[i]))
                {
                    isvalid = false;
                    break;
                }
            }
            if (!isvalid)
            {
                std::cout << "le numero est incorrect" << std::endl;
                continue;
            }
        }
        if(input.size() && !checkspace(input))
            return input;
        std::cout << "vous avez entre une chaine vide ou bien une espace" << std::endl;
    }
}

void PhoneBook::addcontact()
{
    std::string firstName ;
    std::string lastName ;
    std::string nickName ;
    std::string phoneNumber;
    std::string darkestSecret;

    firstName = handle("Entrer votre prenom : ");
    lastName = handle("Entrer votre nom : ");
    nickName = handle("Entrer votre nickname : ");
    phoneNumber = handle("Entrer votre numero : ");
    darkestSecret = handle("Entrer votre secret : ");
    this->contacts[index].setFirstName(firstName);
    this->contacts[index].setLastName(lastName);
    this->contacts[index].setNickname(nickName);
    this->contacts[index].setPhoneNumber(phoneNumber);
    this->contacts[index].setDarkestSecret(darkestSecret);
    if(index<=7)
        index++;
    if(index > 7)
        index = 0;
}
void    PhoneBook::searchfor()
{
    std::string input;
    int i = 0;
    int tmpindex;
    std::cout<< "----------------- | votre contacts |---------"<<std::endl;
    std::cout<< "|   index  |  prenom  |   nom    | nickname |"<<std::endl;
    std::cout<< "---------------------------------------------"<<std::endl;
    while(i <= 7)
    {
        std::cout << "|" << std::setw(10) << i ;
        std::cout << "|"  << std::setw(10) << this->contacts[i].handleval(this->contacts[i].getFirstName());
        std::cout << "|"  << std::setw(10) << this->contacts[i].handleval(this->contacts[i].getLastName());
        std::cout << "|" <<  std::setw(10) << this->contacts[i].handleval(this->contacts[i].getNickName());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout<< "---------------------------------------------"<<std::endl;
    do
    {
        if(std::cin.eof())
            exit(1);
        std::cout << "Choisir un index : ";
        getline(std::cin, input);
        if (!isnotdigits(input) && atoi(input.c_str()) >= 0 && atoi(input.c_str()) <= 7 && input.length() == 1 )
        {
            tmpindex = atoi(input.c_str());
            break;
        }
        else
        {
            std::cout << "Vous devez entrer un index valide." << std::endl;
        }
    } while (true);
    std::cout << "First name: " << contacts[tmpindex].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[tmpindex].getLastName() << std::endl;
    std::cout << "nickename: " << contacts[tmpindex].getNickName() << std::endl;
    std::cout << "Phone number: " << contacts[tmpindex].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[tmpindex].getDarkestSecret() << std::endl;
    
}

void PhoneBook::basefonction()
{
    std::string input;
    index = 0;
    std::cout << "bienvenue dans votre phonebook" << std::endl;
    std::cout << "les options dans lesquels vous avez l'accès sont : ADD , SEARCH, et Exit . " << std::endl;
     while(1)
    {
        std::cout << "Entre an option : ";
        getline(std::cin , input);
        if(std::cin.eof())
            exit(1);
        if(input == "ADD")
            this->addcontact();
        else if(input == "SEARCH")
            this->searchfor();
        else if (input == "EXIT")
            break;
        else
             std::cout << "cette option n'EXIST pas  " << std::endl;
    }
}