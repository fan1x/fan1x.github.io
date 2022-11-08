#include <string>
#include <vector>

// An example of API
class Dictionary {
  // Insert a new language and returns its ID
  size_t add_language(const string &name);

  // Insert new words into a dictionary
  bool add_vocabulary(size_t words1_language_id, const string &word1, size_t words2_language_id, const string &word2);

  // Translate a given text with the given language into the output language
  string translate(size_t input_language_id, const string &text, size_t output_language_id) const;
  
  // Automatically translate a given text into a given language
  string translate(const string &text, size_t output_language_id) const;

  // Return all vocabularies for a given language
  const vector<string> &all_vocabulary(size_t language_id) const;
};
