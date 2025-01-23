import re

class ArticleManager:
    def __init__(self, article_text, options=None):
        """
        Initializes the ArticleManager with article text and configuration options.

        Args:
            article_text (str): The text of the article to process.
            options (dict): Optional configuration with:
                - 'words_per_line' (int): Number of words per line. Default is 12.
                - 'lines_per_page' (int): Number of lines per page. Default is 20.
                - 'payment_structure' (dict): Mapping of pages to payment amounts. Default follows:
                    {1: 30, 2: 30, 3: 60, 4: 60, 'default': 100}
        Raises:
            ValueError: If article_text is not a valid string.
        """
        if not isinstance(article_text, str):
            raise ValueError("Article text must be a valid string.")

        # Default options
        default_options = {
            'words_per_line': 12,
            'lines_per_page': 20,
            'payment_structure': {
                1: 30,
                2: 30,
                3: 60,
                4: 60,
                'default': 100
            }
        }
        self.options = {**default_options, **(options or {})}

        self.article_text = article_text
        self.pages = []
        self.total_words = 0

    def split_into_pages(self):
        """
        Splits the article into pages based on the words per line and lines per page configuration.
        """
        words_per_line = self.options['words_per_line']
        lines_per_page = self.options['lines_per_page']

        # Split the text into words using whitespace as delimiter
        words = re.split(r'\s+', self.article_text.strip())
        self.total_words = len(words)

        # Calculate total lines and iterate to create pages
        total_lines = -(-len(words) // words_per_line)  # Ceiling division
        total_pages = -(-total_lines // lines_per_page)

        for page_index in range(total_pages):
            page_lines = []
            start_word = page_index * lines_per_page * words_per_line
            end_word = min(start_word + lines_per_page * words_per_line, self.total_words)

            # Create lines for each page
            for line_start in range(start_word, end_word, words_per_line):
                page_lines.append(' '.join(words[line_start:line_start + words_per_line]))

            self.pages.append('\n'.join(page_lines))

    def calculate_payment(self):
        """
        Calculates the payment based on the total number of pages using the payment structure.

        Returns:
            int: Payment amount.
        """
        payment_structure = self.options['payment_structure']
        total_pages = len(self.pages)

        return payment_structure.get(total_pages, payment_structure['default'])

    def display_pages(self):
        """
        Displays the article pages, total pages, and payment information.
        """
        payment = self.calculate_payment()
        print(f"**Total Words:** {self.total_words}")
        print(f"**Total Pages:** {len(self.pages)}")
        print(f"**Payment Due:** ${payment}")

        for index, page in enumerate(self.pages, start=1):
            print(f"\n**Page {index}:**\n{page}")

    def process_article(self):
        """
        Orchestrates the process of splitting the article, calculating payment, and displaying results.
        """
        try:
            self.split_into_pages()
            self.display_pages()
        except Exception as e:
            print(f"An error occurred: {e}")

# Example usage
if __name__ == "__main__":
    options = {
        'words_per_line': 12,
        'lines_per_page': 20,
        'payment_structure': {
            1: 30,
            2: 30,
            3: 60,
            4: 60,
            'default': 100
        }
    }

    # Sample article text
    article_text = """Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore 
    et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea 
    commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla 
    pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est 
    laborum."""

    manager = ArticleManager(article_text, options)
    manager.process_article()

# Expected Output:
# **Total Words:** 69
# **Total Pages:** 1
# **Payment Due:** $30
# **Page 1:**
# Lorem ipsum dolor sit amet, consectetur adipiscing elit.
# Sed do eiusmod tempor incididunt ut labore et dolore magna.
# ...
