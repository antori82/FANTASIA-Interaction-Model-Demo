<!--[![Stargazers][stars-shield]][stars-url] -->

<h3 align="center">Framework for Advanced Natural Tools and Applications with Social Interactive Agents</h3>

<p align="center">
<a href="https://github.com/antori82/FANTASIA">
    <img src="images/Logo.jpg" alt="Logo" width="200" height="150">
  </a>
  <p align="center">
	The Unreal Engine project demonstrating how to use multiple <a href="https://github.com/antori82/FANTASIA"><strong>FANTASIA</strong></a> components to build explainable Embodied Conversational Agents with Metahumans and both local and remote Artificial Intelligence services. 
  </p>
</p>

## Introduction

This is the demo project used to showcase the FANTASIA Interaction Model: a combination of Behaviour Trees, Probabilistic Graphical Models and Graph Databases to implement linguistically motivated Conversational AI. This project is based on our work on Conversational Recommender Systems with the Jason character and has been presented at the following events:

- Synthesis of Human Behaviour Training Event (Social CDT - University of Glasgow)
- Virtual Reality and Cultural Heritage tutorial (University of Haifa)
- ACM Intelligent Virtual Agents 2024 conference

## Dependencies

This project depends on the following technologies:

- Microsoft Azure Conversational Language Understanding
- Microsoft Azure Text to Speech
- Groq Large Language Model acceleration
- Neo4j Graph Database
- NVIDIA Audio2Face

Here's some instructions to set up the dependencies using the materials included in the repository. The demo usually runs on a laptop with 32 GB of RAM and an NVidia Geforce 2060 Super. An internet connection is also required.

### Microsoft Azure

Under your <a href="https://azure.microsoft.com"><strong>Microsoft Azure</strong></a> account, create a Speech Service resource to access both Automatic Speech Recognition (ASR) and Text to Speech (TTS) functionalities to access in Unreal through FANTASIA. You can use the customization options to tailor the service to your needs but this is not necessary for this demo project.

Next, create a Language resource to access Conversational Language Understanding (CLU). Log in to Azure Language Studio and create the Test project by importing, through the interface, the Test.json file located in the Resources folder of this repository. The project contains annotated examples for each intent and entity used in the demo. Once the project is set up, use Language Studio to train and deploy your own model. By default, the project is configured to use a project called "Test" and a deployment name also named "Test" but you can choose different names and reconfigure the Unreal project, if you want. You can test your deployment using the Language Studio interface to check that everything is working correctly.

Store both the Speech Service resource key and the Language resource key from the Azure dashboard. Also store the CLU application endpoint. You will need these to configure the Unreal project to use them.

### Groq

Simply create a <a href="https://groq.com/"><strong>Groq</strong></a> account and store the API key so you can use it to configure the Unreal project.

### Neo4j

Download and install <a href="https://neo4j.com/download/"><strong>Neo4j Desktop</strong></a> and, through the GUI, import the database dump located in the Resources folder of this repository. The database version used for this demo project is 5.21.2. The database contains the intent and beliefs structure compatible with the Azure CLU project to perform Dialogue State Tracking and to host the small amount of information about the movies domain needed for the demo. After creating the database, copy the content of the neo4j.conf file located in the Resources folder to configure your local version. The configuration disables authentication by default since the database needs to be available on localhost only. It also enables lenient relationship creation, on which the demo project relies.

### NVidia Audio2Face

Download and install the <a href="https://docs.omniverse.nvidia.com/launcher/latest/overview.html"><strong>NVidia Omniverse Launcher</strong></a>. From the launcher, install Audio2Face 2023.1.1 (**important:** version 2023.2.0 contains a bug that creates problems during audio streaming so we recommend not to use it). From the launcher, also download the Unreal Engine 5.3 connector. A connector for Unreal Engine 5.4 has not been distributed by NVidia but the 5.3 version works fine with 5.4. To make the connector visible in the project, copy the ACE folder downloaded through the Launcher in the Plugins folder of the project. Unfortunately, we cannot redestribute the connector through the repository so you need to do this manually.

## Project configuration

Open the DefaultGame.ini file located in the Config folder of the repository and fill in the empty fields:

- Put the Azure Speech Service key in the "SpeechKey" field under the section configuring the Azure NLU Component
- Put the Azure Language key in the "LanguageKey" field under the section configuring the Azure NLU Component
- Put the Azure Language endpoint in the "Endpoint" field under the section configuring the Azure NLU Component. The endpoint can be found on the Azure dashboard under the Language resource (Keys and Endpoint section) on the portal
- Put the Azure Speech Service key in the "Key" field under the section configuring the Azure TTS Component. This is the same key used for the "SpeechKey" field in the Azure NLU section
- Put the Groq API key in the "Key" field under the section configuring the Groq Component

## Project start

Once everything is configured, you can start, first of all, the Neo4j database. Since this is a small database, the memory impact is low. The first queries may be slow to run but, as the caching mechanism kicks in, the demo should run faster.

Next, start the Audio2Face application. In order to save resources, we recommend to start it in headless mode. To do so, go into the folder where you installed Audio2Face and run the audio2face_headless.bat command. This will execute Audio2Face as a local service with no GUI. To configure Audio2Face running in headless mode, connect to it using your browser and going to localhost:8011/docs after the application has finished loading. From here, you can use the "LoadUSD" command to load the Audio2Face scene located in the Resources folder of this repository. Simply put the path to the Audio2Face.usd file in the "string" field of the REST command. After a few seconds, you should get and "Ok, succeeded" message in the interface.

Now, you can start the Unreal Project. Check that the configuration values are present in the components found on the Avatar Blueprint. If eveything is ok, you should be able to run the application and test the demo. The avatar, Lawrence, is a simplified version of Jason, the movie recommender AI we use for our research in Conversational AI. Simplifications allow the project to run on high-end laptops and allow us to redistribute the materials in the database.

For demonstration purposes, understanding is limited to open questions about genres and polar questions about people, movies and genres. A full technical description will be added later on the repository to help developers orient themselves about the use of the FANTASIA Interaction Model.

## Citing FANTASIA

If you use FANTASIA for your research, please cite the following papers in your publications

<div id="refs" class="references csl-bib-body hanging-indent">

<div id="ref-xie2018" class="csl-entry">

Origlia, A., Cutugno, F., Rodà, A., Cosi, P., & Zmarich, C. (2019). FANTASIA: a framework for advanced natural tools and applications in social, interactive approaches. Multimedia Tools and Applications, 78(10), 13613-13648.

</div>

<div id="ref-xie2018" class="csl-entry">

Origlia, A., Di Bratto, M., Di Maro, M., & Mennella, S. (2022). Developing Embodied Conversational Agents in the Unreal Engine: The FANTASIA Plugin. In Proceedings of the 30th ACM International Conference on Multimedia (pp. 6950-6951).

</div>

</div>

<!-- LICENSE -->
## License

Distributed under the MIT license.