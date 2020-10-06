# Robot-Marcheur(à ouvrir en tant que RAW)
Partie 1 Conception d’une jambe

1.Conception du schéma cinématique de la jambe du système
2.Indication des repères liés aux différents solides du système
3.Matrice de Denavit-Hartenberg
-------------------------------------------------
Articulation  |  σi |   αi |   di  |  θi |   ri |
-------------------------------------------------
R0 → R1       |  0  |   0  |   d1  |  q1 |   r1 |
R1 → R2       |  0  |   0  |   d2  |  q2 |   r2 |
R2 → R3       |  0  |   90°|   0   |  0  |   r3 |
-------------------------------------------------
4.Création du package qui contiendra l’urdf de votre robot ainsi que les launch files nécessaires à la visualisation des urdf :
catkin_create_pkg urdf_quad rospy roscpp std_msgs

Ensuite on crée un dossier du nom de launch dans le dossier du package et ainsi qu’un fichier de type xml dont on a nomé check_urdf.launch qui est le launch file :
touch check_urdf.launch

<?xml version="1.0" encoding="utf-8"?>
<launch>
  <arg name="model" default="$(find urdf_quad)/urdf/pied.urdf"/>
  <param name="robot_description" command="$(find xacro)/xacro.py $(arg model)" />
  <node name="joint_state_publisher_gui" pkg="joint_state_publisher_gui" type="joint_state_publisher_gui" />
  <node name="robot_state_publisher" pkg="robot_state_publisher" type="robot_state_publisher" />
  <node name="rviz" pkg="rviz" type="rviz" args="-d $(find urdf_quad)/rviz/urdf.rviz"/>
</launch>

5.Création de l’urdf de notre robot avec une jambe et le base_link de du robot par la commande :
touch pied.urdf
Ce fichier a été placé dans ledossier du package urdf_quad que l’on a précedement créer.

Ensuite on il nous faut actualiser les packages et pour cela on appellera les commandes suivante :
catkin build
Source devel/setup.bash

Maintenant on peut exécuter le fichier par la commande :
roslaunch urdf_quad check_urdf.launch

Ce fichier contient tous les paramètres que l’on a mis au point pour créer une jambe du robot.
 Créer un package udm_project_control avec un noeud permettant de contrôler la jambe de
manière directe, puis un autre noeud contrôlant la jambe de manière indirecte.

6.Créer le package udm_project_moveitconfig avec le moveit assistant setup par la commande :
roslaunch moveit_seup_assistant setup_assistant.launch

7. Créer un package udm_project_control avec un noeud permettant de contrôler la jambe de manière directe, puis un autre noeud contrôlant la jambe de manière indirecte.
Pour cela on utilise l’application MoveIt!Setup Assistant et on continue en suivant les instructions et paramètres guidés par l’application, jusqu’à générer le package udm_project_moveitconfig.
Et on réactualise les packages avec la commande précédente
catkin build
Source devel/setup.bash

Puis on exécute le fichier demo.launch pour la visualisation :
roslaunch udm_project_moveitconfig demo.launch


Partie 2 Ajout des autres jambes
A partir de l’urdf créé à la partie 1, créer une nouvelle urdf où vous ajouterez le reste des jambes de votre robot :
D’abord on crée un package nommé urdf_quad_complet par la commande :
catkin_create_pkg urdf_quad_complet rospy roscpp std_msgs geometry sensor_msgs

Ensuite le fichier launch par :
touch check_urdf.launch

Et on crées le fichier urdf où l’on paramettra les commandes pour l’ensemble des quatre membres de notre robot marcheur :
touch check_urdf.piedcomplet
