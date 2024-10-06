# Data Science Assignments - Apache Beam, Auto EDA, and Exploratory Data Analysis

This repository contains three distinct assignments demonstrating different aspects of data science, including **Apache Beam pipelines**, **automated exploratory data analysis (EDA)**, and **manual exploratory data analysis using advanced visualizations**.

## Table of Contents

- [Assignment 1: Complete Dataset EDA with D3.js Visualizations](#assignment-1-complete-dataset-eda-with-d3js-visualizations)
- [Assignment 2: Auto EDA Using Sweetviz](#assignment-2-auto-eda-using-sweetviz)
- [Assignment 3: Apache Beam Features Demonstration](#assignment-3-apache-beam-features-demonstration)
- [Files Included](#files-included)

---

## Assignment 1: Complete Dataset EDA with D3.js Visualizations

**File**: `eda_assignment_1.ipynb`

In this assignment, I performed a **comprehensive exploratory data analysis (EDA)** on the **House Prices: Advanced Regression Techniques** dataset from Kaggle. The goal was to explore the dataset, uncover meaningful insights, and generate advanced visualizations.

I used Python libraries such as:

- **Pandas** for data manipulation.
- **Matplotlib** and **Seaborn** for traditional visualizations (histograms, box plots, scatter plots).
- **Plotly** to create interactive visualizations.

The key steps involved:

- Initial data cleaning and handling of missing values.
- Visualizing distributions, outliers, and correlations using histograms, boxplots, scatter plots, and correlation matrices.
- Generating interactive charts with Plotly.

---

## Assignment 2: Auto EDA Using Sweetviz

**Files**:

- `auto_EDA_using_sweetvis.ipynb`
- `sweetviz_report.html`

In this assignment, I used the **Sweetviz** library to perform **automated exploratory data analysis (Auto EDA)** on a Kaggle dataset. The Sweetviz library automatically generates an in-depth report, including:

- Descriptive statistics for each feature.
- Data distribution plots.
- Outlier detection.
- Correlation matrices.

The generated HTML report is stored as `sweetviz_report.html` and includes a detailed analysis of the dataset, covering both numerical and categorical features. I interpreted key insights from the report, such as missing data, skewed distributions, and variable correlations, directly in the notebook (`auto_EDA_using_sweetvis.ipynb`).

---

## Assignment 3: Apache Beam Features Demonstration

**File**: `apache_beam.ipynb`

In this assignment, I implemented an **Apache Beam** pipeline to demonstrate key features such as:

- **Composite Transforms**: Combining multiple operations (e.g., `Map`, `Filter`) into reusable transforms.
- **Pipeline I/O**: Reading and writing data from different sources.
- **Windowing and Triggers**: Handling streaming data by segmenting it into fixed time windows and processing based on event or processing time.
- **ParDo**: Applying custom transformations to each element in a PCollection.
- **Streaming Data**: Processing data in real-time with simulated streaming.

This notebook showcases how Apache Beam can be used for both batch and streaming data processing in Google Colab, using the DirectRunner.

---

## Files Included

1. **`3-apache_beam.ipynb`** - Colab notebook for demonstrating key Apache Beam features (composite transforms, windowing, ParDo, and streaming).
2. **`2-auto_EDA_using_sweetvis.ipynb`** - Colab notebook demonstrating automated EDA using the Sweetviz library.
3. **`1-eda_assignment_1.ipynb`** - Colab notebook with complete dataset EDA, including advanced visualizations (Plotly, Seaborn).
4. **`sweetviz_report.html`** - Auto-generated HTML report by Sweetviz for the dataset analyzed in Assignment 2.

---
