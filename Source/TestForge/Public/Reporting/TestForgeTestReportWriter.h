//#pragma once
//
//#include "TestForgeTestSuiteResult.h"
//#include <CoreMinimal.h>
//
///** Writes test reports, e.g. for publishing with CI/CD pipelines. */
//class TESTFORGE_API FTestForgeTestReportWriter
//{
//public:
//    /** Virtual destructor, required for Linux/Android builds. */
//    virtual ~FTestForgeTestReportWriter() = default;
//    /** Gets the type of the reports created by this writer. Only one writer per type will be executed. */
//    virtual FName GetReportType() const = 0;
//
//    /** Write the test report for the specified results. */
//    virtual void WriteReport(const TArray<FTestForgeTestSuiteResult>& TestSuites,
//                             const FString& ReportPath) const = 0;
//
//protected:
//    /** Gets the total number of tests among the passed test suites. */
//    int32 NumTotalTests(const TArray<FTestForgeTestSuiteResult>& TestSuites) const;
//
//    /** Gets the number of failed tests among the passed test suites. */
//    int32 NumFailedTests(const TArray<FTestForgeTestSuiteResult>& TestSuites) const;
//
//    /** Gets the number of skipped tests among the passed test suites. */
//    int32 NumSkippedTests(const TArray<FTestForgeTestSuiteResult>& TestSuites) const;
//
//    /** Gets the total time all tests of the passed test suites have run, in seconds. */
//    float GetTotalTimeSeconds(const TArray<FTestForgeTestSuiteResult>& TestSuites) const;
//
//    /** Gets the time the first of the passed test suites has run. */
//    FString GetTimestamp(const TArray<FTestForgeTestSuiteResult>& TestSuites) const;
//
//    /** Applies all passed replacements to the contents of the file at the specified path, and returns the result. */
//    FString ApplyTemplateFile(const FString& TemplateFilePath,
//                              const TMap<FString, FString>& Replacements) const;
//};
//
