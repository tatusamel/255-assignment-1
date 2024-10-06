# Data Mining Assignments - Fall 2024 (CMPE-255)

Student Name: Serhat Gundem
Student Number: 018183828

This repository contains all the deliverables for the 1st assignment of Data Mining course (CMPE-255).

## Table of Contents

1. [Assignment 1: Python in Colab](#assignment-1-python-in-colab)
2. [Assignment 2: AI Pair Programmer with GitHub Copilot](#assignment-2-ai-pair-programmer-with-github-copilot)
3. [Assignment 3: AutoML with Akkio/JADBio](#assignment-3-automl-with-akkio-or-jadbio)

---

## Assignment 1: Python in Colab

### Description:

In this assignment, I explored Python development using Google Colaboratory. I followed tutorials by Derek Banas and implemented the features of advanced Colab tutorials.

### Steps Followed:

1. Implemented Derek Banas' Python tutorial in Google Colab.
2. Experimented with advanced Colab features (referenced in class slides).

### Files:

- `derek_banas_codes.ipynb`: This notebook contains the implementation of Derek Banas' Python tutorial in Colab.
- `colab_advanced_features.ipynb`: This notebook covers the advanced features of Colab as shown in the course slides.

### How to Run:

1. Open the notebooks in Google Colab.
2. Run the cells in the notebook sequentially to see the results.

You can find the video demonstration of me running the examples of Derek Banas [here](https://youtu.be/sKPy9AMO1RM).

---

## Assignment 2: AI Pair Programmer with GitHub Copilot

### Description:

This assignment focused on using AI pair programming tools to build a coding project. I used GitHub Copilot within Visual Studio Code (VS Code) to demonstrate its capabilities in a project.

### Project:

For this assignment, I solved a leetcode problem in C++ using GitHub Copilot, demonstrating its ability to assist in coding both backend and frontend components. The AI pair programming tool helped generate code snippets based on comments and partial code inputs.

### Files:

- `usingLLM.cpp`: This file contains the implementation of the leetcode problem in cpp. (Leetcode 200 Number of islands)

### Video Demo:

You can find the video demonstration of me using GitHub Copilot [here](https://youtu.be/y9fd3FPSxcQ).

## Assignment 3: AutoML with Akkio

This repository contains the deliverables for **Assignment 3** of the Data Mining course. The project demonstrates an **end-to-end machine learning pipeline** using a zero-code AutoML platform, either **Akkio** or **JADBio**, to train a machine learning model without writing any code.

### Project Overview

In this assignment, I used an AutoML platform to:

- Upload and preprocess a dataset.
- Visualize key features of the dataset to gain insights.
- Build and evaluate machine learning models.
- Make predictions based on the trained models.

#### Tools Used:

- [Akkio](https://akkio.com/)
- Dataset: titanic dataset from kaggle [dataset](https://www.kaggle.com/competitions/titanic/data)

---

### Workflow

#### 1. Data Selection

For this project, I used the following dataset:

- **Dataset name**: [titanic dataset](https://www.kaggle.com/competitions/titanic/data)

The dataset contains features such as:

- "passengerId", "survived", "name", "sex", "age", "parch", etc.

#### 2. Data Preprocessing

- The Akkio platform automatically handled the data preprocessing steps, including:
  - **Data Cleaning**: Handling missing values.
  - **Category Conversion**: Converting categorical variables into numerical format.
  - **Normalization**: Normalizing data to ensure proper scaling across features.

#### 3. Data Exploration and Visualization

Before training the model, I explored the dataset by generating the following visualizations:

- **Correlation Matrix**: Visualizing the relationships between different features.
- **Scatter Plots**: Examining relationships between key variables.
- **Bar Charts**: Showing distributions of categorical data.

These visualizations helped me gain insights into the structure of the data, guiding the model-building process.

#### 4. Model Selection and Training

- I tested multiple machine learning models provided by the platform, including:

  - **Decision Trees**
  - **Random Forest**
  - **Logistic Regression**

  The platform automatically trained each model and evaluated its performance based on accuracy, precision, and recall.

- **Model Chosen**: I selected the model Random Forest.

#### 5. Predictions

- After training, I used the model to make predictions on new, unseen data.
- The predictions were successfully generated.
